// Hey guys , its Faisal's Program : TITLE >> { 5 3 4 * + 9 - }
#include <iostream>
#include <stack>
using namespace std;
int postfixEvaluation(string expression)
{
    stack<int> st;

    int i = 0;
    while (i < expression.size())
    {
        if (isdigit(expression[i]))
        {
            st.push(expression[i] - '0');
        }

        else
        {
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();

            switch (expression[i])
            {
            case '+':
                st.push( val1+val2);
                break;
            case '-':
                st.push(val1-val2);
                break;
            case '*':
                st.push(val1*val2);
                break;
            case '/':
                st.push(val1/val2);
                break;
            }
            
        }
        i++;
    }

    return st.top();
}
int main(void)
{

    string expression =  "534*+9-";
    //cout << "enter expression : ";
    //cin >> expression;

    int val = postfixEvaluation(expression);

    cout << "the final result is : " << val;

    return 0;
}
