// Hey guys , its Faisal's Program : TITLE >> { for integers }
#include <iostream>
using namespace std;

int main(void) {


    int n;
    cin >> n;

    int arr[n];
    for( int i=0; i<n; i++ )
    {
        cin >> arr[i];
    }


   long long int hash[13^7] = {0};

    for( int i=0; i<n; i++ )
    {
        hash[arr[i]] += 1;
    }

    int q;

    cin >> q;
    while( q-- )
    {
        int number;
        cin >>  number;

        cout << hash[number] << " ";
    }


  return 0;
}
