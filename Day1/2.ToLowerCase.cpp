#include <algorithm>
#include <cctype>

class Solution {
public:
    string toLowerCase(string s) {
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        return s;
    }
};

//1) #include <algorithm>: This line includes the C++ Standard Library header <algorithm>, which provides several algorithms for working with containers,
// including the std::transform function.

//2) #include <cctype>: This line includes the C Standard Library header <cctype>, which provides functions for working with characters, such as std::tolower.

//3) class Solution: This defines a C++ class named Solution.

//4) public:: This keyword indicates that the following members are accessible from outside the class.

//5) string toLowerCase(string s): This is a member function of the Solution class. It takes a single parameter s,
// which is a string to be converted to lowercase.

//6) std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return std::tolower(c); });:
//   This line uses std::transform to convert the characters of the string s to their lowercase equivalents.
//   The std::transform function applies the provided lambda function to each character in the range defined by s.begin() and s.end() (inclusive)
// and stores the result in the same location (i.e., back in s). The lambda function [](unsigned char c) { return std::tolower(c); } 
// converts each character to its lowercase form using std::tolower from the C Standard Library.

//7) return s;: After converting all the characters to lowercase, the function returns the modified string s.
