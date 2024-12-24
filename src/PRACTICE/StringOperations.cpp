// – A denotes AND operation
// – B denotes OR operation
// – C denotes XOR Operation

// str: 1C0C1C1A0B1

// Output:
// 1

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int OperationsBinaryString (char *str) {
        if(str == NULL) return -1;

        int n = strlen(str);
        int result = str[0] - '0';

        for(int i =1; i < n; i+=2) {
            char operation = str[i];
            int nextDigit = str[i+1] - '0';

            switch(operation) {
                case 'A':
                result = result & nextDigit;
                break;

                case 'B':
                result = result | nextDigit;
                break;

                case 'C':
                result = result ^ nextDigit;
                break;

                default:
                return -1;
            }
        }
        return result;
    } 
};

int main() {
    Solution obj;
    char s1 [] = "1C0C1C1A0B1";
    cout << obj.OperationsBinaryString(s1);
    return 0;
}