// Hey guys , its Faisal's Program : TITLE >> { 4 , 67 , 12 , 45 , 91 }
#include <iostream>
#include <stack>
using namespace std;
void printStackElement()
{
    stack<int>s;

    s.push(4);
    s.push(67);
    s.push(12);
    s.push(45);
    s.push(91);

    while( !s.empty())
    {
      cout << s.top() << " ";
      s.pop();
    }
}
int main(void) {

  printStackElement();

  return 0;
}
