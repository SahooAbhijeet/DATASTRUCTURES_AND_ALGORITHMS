#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    reverse(s.begin(), s.end()); // eulb si yks eht
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        string word = "";
        while(i < s.length() && s[i] != ' ') {
            word = word + s[i];
            i++;
        }
            reverse(word.begin(), word.end());
        
        if(word.length() > 0) {
            ans = ans + " " + word;
        }
    }
    return ans.substr(1);
}
int main() {
    string s  = "the sky is blue";
    cout << "The reverse words: " << reverseWords(s) << endl;
    return 0;
}