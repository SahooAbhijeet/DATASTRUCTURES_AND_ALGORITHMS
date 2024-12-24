#include<bits/stdc++.h>
using namespace std;

 bool isAnagram(string s, string t) {
    // s and t are anagram means all the character of s should be present in the string t in any order.
    unordered_map<char, int> count;
    for(auto it1: s) {
        count[it1]++;
    }
    for(auto it2: t) {
        count[it2]--;
    }
    for (auto val : count) {
            if (val.second != 0) {
                return false;
            }
    }
    return true;
 }


int main() {
   string s = "anagram";
   string t = "naagram";
   if(isAnagram(s,t)) {
    cout << "True" << endl;
   } else {
    cout << "False" <<  endl;
   }
    return 0;
}