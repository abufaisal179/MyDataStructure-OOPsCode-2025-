#include <iostream>
using namespace std;

int stringConversion(const string str) {
    if (str.empty()) return -1;

    int container = 0;

    for (char ch : str) {
        if (!isdigit(ch)) return -1; // Early return on non-digit
        container = container * 10 + (ch - '0');
    }

    return container;
}

int main() {
    string str = "12345";lfkgje;lkgjl

    cout << "The integer is: " << stringConversion(str);

    return 0;
}
