Last login: Thu Feb  4 10:44:41 on ttys000

The default interactive shell is now zsh.
To update your account to use zsh, please run `chsh -s /bin/zsh`.
For more details, please visit https://support.apple.com/kb/HT208050.
Justins-MacBook-Pro:~ chen$ cd Documents/
Justins-MacBook-Pro:Documents chen$ ls
Aspyr				Virtual Machines.localized
GitHub				WebEx
League of Legends		Zoom
Microsoft User Data		haiyin stuff
Justins-MacBook-Pro:Documents chen$ cd GitHub/
Justins-MacBook-Pro:GitHub chen$ ls
TaskCalendar
Justins-MacBook-Pro:GitHub chen$ git clone https://github.com/CSCI-3010-CUBoulder/Spring21_Team7
Cloning into 'Spring21_Team7'...
remote: Enumerating objects: 7, done.
remote: Counting objects: 100% (7/7), done.
remote: Compressing objects: 100% (5/5), done.
remote: Total 7 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (7/7), done.
Justins-MacBook-Pro:GitHub chen$ git branch
fatal: not a git repository (or any of the parent directories): .git
Justins-MacBook-Pro:GitHub chen$ ls
Spring21_Team7	TaskCalendar
Justins-MacBook-Pro:GitHub chen$ cd Spring21_Team7/
Justins-MacBook-Pro:Spring21_Team7 chen$ git branch
* main
Justins-MacBook-Pro:Spring21_Team7 chen$ git checkout -b chen
Switched to a new branch 'chen'
Justins-MacBook-Pro:Spring21_Team7 chen$ ls
README.md			functions_to_implement.cp
Justins-MacBook-Pro:Spring21_Team7 chen$ vi functions_to_implement.cp 


















Justins-MacBook-Pro:Spring21_Team7 chen$ vim functions_to_implement.cp 
Justins-MacBook-Pro:Spring21_Team7 chen$ git push https://github.com/CSCI-3010-CUBoulder/Spring21_Team7 --all
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/CSCI-3010-CUBoulder/Spring21_Team7/'
Justins-MacBook-Pro:Spring21_Team7 chen$ ssh -T git@github.com
The authenticity of host 'github.com (140.82.112.4)' can't be established.
RSA key fingerprint is SHA256:nThbg6kXUpJWGl7E1IGOCspRomTxdCARLviKw6E5SY8.
Are you sure you want to continue connecting (yes/no/[fingerprint])? git config --global user.name "Your name here"^[
Please type 'yes', 'no' or the fingerprint: yes
Warning: Permanently added 'github.com,140.82.112.4' (RSA) to the list of known hosts.
git@github.com: Permission denied (publickey).
Justins-MacBook-Pro:Spring21_Team7 chen$ git config --global user.name aosdnffoia
Justins-MacBook-Pro:Spring21_Team7 chen$ git config --global user.email kingdra36@gmail.com
Justins-MacBook-Pro:Spring21_Team7 chen$ git config --global color.ui true
Justins-MacBook-Pro:Spring21_Team7 chen$ git config --global core.editor emacs
Justins-MacBook-Pro:Spring21_Team7 chen$ ssh-keygen -t rsa -C kingdra36@gmail.com
Generating public/private rsa key pair.
Enter file in which to save the key (/Users/chen/.ssh/id_rsa): pbcopy < ~/.ssh/id_rsa.pub
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Saving key "pbcopy < ~/.ssh/id_rsa.pub" failed: No such file or directory
Justins-MacBook-Pro:Spring21_Team7 chen$ cd ..
Justins-MacBook-Pro:GitHub chen$ pbcopy < ~/.ssh/id_rsa.pub kingdra36@gmail.com
-bash: /Users/chen/.ssh/id_rsa.pub: No such file or directory
Justins-MacBook-Pro:GitHub chen$ pbcopy < ~/.ssh/id_rsa.pub
-bash: /Users/chen/.ssh/id_rsa.pub: No such file or directory
Justins-MacBook-Pro:GitHub chen$ cd Spring21_Team7/
Justins-MacBook-Pro:Spring21_Team7 chen$ ls
README.md			functions_to_implement.cp
Justins-MacBook-Pro:Spring21_Team7 chen$ vim functions_to_implement.cp 

/* String functions section */

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator);

// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2);

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2);

// Joins all strings in a vector together, using the glue string in between them
std::string Join(std::vector<std::string> pieces, std::string glue);

// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

// divides an input integer by 2 until it is impossible to do so, then returns the final number.
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
int RemoveTwos(int original){
        int count=original;
        while(count%2==0){
                count/=2;
        }
        return count;
}

// takes a vector of integers and removes all elements evenly divisible by the passed in int
std::vector<int> MultiplesFilter(std::vector<int>, int divides_by);

// returns a vector with true for even numbers and false for odd numbers
std::vector<bool> EvenMask(std::vector<int>);

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int>);

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums);

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);

// Adds an integer n to each element of a given vector
std::vector<int> VectorPlusN(std::vector<int> v, int n);

// Multiples an integer n with each element of a given vector
std::vector<int> VectorTimesN(std::vector<int> v, int n);

// takes in two integers and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
"functions_to_implement.cp" 123L, 5062C
