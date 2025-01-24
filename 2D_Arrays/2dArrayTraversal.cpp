// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;

void printArrayElement(int arr[][3], int rows, int column)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < column; j++)
    {
      cout << arr[i][j] << "    ";
    }
    cout << endl;
  }
}

int main(void)
{

  int arr[3][3] = {{2, 1, 9},
                   {4, 2, 89},
                   {12,45,23}};

  printArrayElement(arr, 3, 3);
  return 0;
}
