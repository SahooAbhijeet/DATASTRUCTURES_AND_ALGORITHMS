#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:

    void generateBinaryStrings(int k, char str[], int n) {
        if(n == k) {
            str[n] = '\0';
            cout << str << " ";
            return;

        }
            if(str[n-1]  == '1') {
                str[n] = '0';
                generateBinaryStrings(k, str, n+1);
            }

              if(str[n-1]  == '0') {
                str[n] = '0';
                generateBinaryStrings(k, str, n+1);
            
                str[n] = '1';
                generateBinaryStrings(k, str, n+1);
            }
        }
    void generateAllStrings(int k) {
        if(k <= 0) return;

        char str[k+1];

        str[0] = '0';
        generateBinaryStrings(k, str, 1);

        str[0] = '1';
        generateBinaryStrings(k, str, 1);
    }
};
    


int main() {
    int k = 3;
    Solution obj;
    obj.generateAllStrings(k);
    return 0;
}

/*
K : size of string 
First We Generate All string starts with '0'
initialize n = 1 . 
GenerateALLString ( K  , Str , n )
  a. IF n == K 
     PRINT str.
  b. IF previous character is '1' :: str[n-1] == '1'
     put str[n] = '0'
     GenerateAllString ( K , str , n+1 )
  c. IF previous character is '0' :: str[n-1] == '0'
     First We Put zero at end and call function 
      PUT  str[n] = '0'
           GenerateAllString ( K , str , n+1 )  
      PUT  str[n] = '1'
           GenerateAllString ( K , str , n+1 )
 */