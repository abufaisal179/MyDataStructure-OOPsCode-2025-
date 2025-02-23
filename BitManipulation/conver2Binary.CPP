// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void reverse(char *str, int right, int left)
{
  while (left < right)
  {
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    left++;
    right--;
  }
}
char *convert2Binary(int number)
{
  int index = 0;

  char *str = new char[32];
  while (number > 0)
  {
    int bit = number % 2;
    str[index++] = '0' + bit;
    number /= 2;
  }
  str[index] = '\0';
  reverse(str, index - 1, 0);
  return str;
}
int main(void)
{

  char *s =  convert2Binary(13);
  cout << s << endl;

  delete[] s;
  return 0;
}
