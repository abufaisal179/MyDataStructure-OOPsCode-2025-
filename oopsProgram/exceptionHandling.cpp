#include <iostream>
#include <exception> // For std::bad_alloc

using namespace std;

int main() {
    try {
        int *arr = new int[1000000000]; // Allocate a reasonable amount
        cout << "Memory allocation done" << endl;
        delete[] arr;
    } 
    catch (const exception &e) { // Catch specific memory allocation failure
        cout << "Memory allocation failed: " << e.what() << endl;
    }
    return 0;
}
