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
