// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <unordered_map>
using namespace std;
int returnMaxFreq( int *arr , int  n )
{
    unordered_map< int , int > index;

     int maxFeq = 0;
     int max;
    for( int i=0; i<n; i++ )
    {
        index[arr[i]]++;
        maxFeq = max( maxFeq , index[arr[i]] );
    }
    for( int i=0; i<n; i++ )
    {
        
    }
    
}
int main(void) {

  return 0;
}
