// Hey guys , it's Faisal's Program : TITLE >> Prime Checker
#include <iostream>
using namespace std;

void prime(int *arr, int n, int j) {
    if (j == n)
        return;

    bool isPrime = true;

    if (arr[j] <= 1)
        isPrime = false;
    else {
        for (int i = 2; i * i <= arr[j]; i++) {
            if (arr[j] % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << arr[j] << " is a prime number" << endl;
    else
        cout << arr[j] << " is not a prime number" << endl;

    prime(arr, n, j + 1);
}

int main(void) {
    int arr[] = {4, 5, 2, 4, 9, 11, 8, 98, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    prime(arr, n, 0);

    return 0;
}
