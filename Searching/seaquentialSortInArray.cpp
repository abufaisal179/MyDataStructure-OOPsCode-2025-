// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int seq( int target ,int  arr[] , int size )
{
    int i = 0;
    while ( i < size )
    {
         if( arr[i] == target )
         return i;

         i++;
    }

    //cout << "the element is not present in the array ! ";
}
int main(void) {


 int target , arr[] = { 3 , 7 , 34 , 23 , 1 , 67 , 234 , 7 };
 int size = sizeof(arr)/sizeof(int);
 cout <<"enter the target element : ";
 cin >> target;
 int result = seq( target , arr , size  );
 cout << "the index is : " << result;
  return 0;
}
