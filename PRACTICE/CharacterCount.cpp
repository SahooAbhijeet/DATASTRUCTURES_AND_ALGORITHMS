#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    char target = 'k';
    int count = 0;

    
    cout << "Enter a string: ";
    getline(cin, inputString);

    
    for (char c : inputString) {
        if (c == target) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
