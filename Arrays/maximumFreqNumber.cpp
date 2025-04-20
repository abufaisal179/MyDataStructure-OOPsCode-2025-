// Hey guys, it's Faisal's Program : TITLE >> Max Frequency Finder
#include <iostream>
#include <unordered_map>
using namespace std;

int returnMaxFreq(int *arr, int n)
{
    unordered_map<int, int> freqMap;

    int maxFreq = 0;
    for (int i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
        maxFreq = max(maxFreq, freqMap[arr[i]]);
    }

    cout << maxFreq << endl;
    for( int i=0; i<n; i++ )
    {
         if( maxFreq == freqMap[arr[i]] && maxFreq != 1 ) 
         return arr[i];
    }
    return -1; // You forgot to return the value
}

int main(void)
{
    int arr[5] = {4, 3, 2, 1, 2 };
    int size = 5;

    int result = returnMaxFreq(arr, size);
    cout << "Maximum frequency of any element = " << result << endl;

    return 0;
}
