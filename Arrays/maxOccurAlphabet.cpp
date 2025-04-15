#include <iostream>
#include <string>
using namespace std;

// Function to return the first character with maximum occurrence
char returnMaxOcc(string str, int n) {
    int count[26] = {0};  // only lowercase letters

    // Counting frequency of each character
    for (int i = 0; i < n; i++) {
        char ch = str[i];
        count[ch - 'a']++;
    }

    // Finding the character with the highest frequency
    int maxFreq = 0;
    char maxChar = '\0';
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1 ) {
            return  i + 'a';
        }
    }

    return -1;
}

int main() {
    string str = "flisal";
    int len = str.length();

    cout << "// Hey guys , it's Faisal's Program : TITLE >> Most Occurring Character\n";
    cout << "Max occurring character: " << returnMaxOcc(str, len) << endl;

    return 0;
}
