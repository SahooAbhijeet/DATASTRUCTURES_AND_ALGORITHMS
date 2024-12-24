#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to find the longest common suffix between two strings
int longestCommonSuffix(const string &a, const string &b) {
    int len_a = a.size();
    int len_b = b.size();
    int i = len_a - 1, j = len_b - 1;
    int commonLength = 0;
    
    while (i >= 0 && j >= 0 && a[i] == b[j]) {
        commonLength++;
        i--;
        j--;
    }
    
    return commonLength;
}

// Function to find the most rhyming word from the dictionary
string findMostRhymingWord(const string &input, const vector<string> &dictionary) {
    string bestMatch = "";
    int maxSuffixLength = 0;

    for (const string &word : dictionary) {
        if (word == input) continue; // Skip exact matches
        
        int currentSuffixLength = longestCommonSuffix(input, word);
        
        if (currentSuffixLength > maxSuffixLength) {
            maxSuffixLength = currentSuffixLength;
            bestMatch = word;
        }
    }

    return bestMatch;
}

int main() {
    string input = "thunder";
    vector<string> dictionary = {"puzzle", "blender", "thunder", "under"};

    string result = findMostRhymingWord(input, dictionary);

    cout << "Most rhyming word: " << result << endl;

    return 0;
}
