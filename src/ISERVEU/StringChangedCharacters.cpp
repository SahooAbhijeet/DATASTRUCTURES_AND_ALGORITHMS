#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string fun(string input, char ch1, char ch2) {

        for(int i = 0; i < input.size(); i++) {
            if(input[i] == ch1) {
                input[i] = ch2;
                
            } else if(input[i] == ch2) {
                input[i] = ch1;
            }
            return input;
        }
    //     // Check if ch1 and ch2 are the same
    //     if (ch1 == ch2)
    //         return input;  // Return unchanged if ch1 and ch2 are the same

    //     // Check if the string contains only lowercase alphabetical characters
    //     for(char ch : input) {
    //         if(!islower(ch))
    //             return "Invalid input: Only lowercase letters allowed";  // Return if invalid character found
    //     }

    //     // Flag to check if ch1 is present in the string
    //     bool found = false;

    //     // Replace all occurrences of ch1 with ch2
    //     for(int i = 0; i < input.length(); i++) {
    //         if(input[i] == ch1) {
    //             input[i] = ch2;
    //             found = true;
    //         }
    //     }

    //     // If ch1 was not found, return the string unchanged
    //     if (!found)
    //         return input;

    //     return input;  // Return the modified string
    // }
    }
};

int main() {
    Solution obj;
    string input = "aman";  // Input string with lowercase letters only
    char ch1 = 'a';
    char ch2 = 'b';
    
    cout << obj.fun(input, ch1, ch2);  // Expected output: "bmbn"
    
    return 0;
}
