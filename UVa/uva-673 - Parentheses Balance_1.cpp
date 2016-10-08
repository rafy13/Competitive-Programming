//Accepted code
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
bool ValidParentheses(const string &s)
{
    stack<char> st;
    int length;
    length=s.size();
    for (int i = 0; i < length ; i++)
    {
        if (s[i] == '(' || s[i] == '[')
                st.push(s[i]);
        else
        {
            if (st.empty())
                return false;
            char e = st.top();
            if ((s[i] == ')' && e != '(')|| (s[i] == ']' && e != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n > 0)
    {
        getline(cin, s);
        cout << (ValidParentheses(s) ? "Yes" : "No") << endl;
        n--;
    }
    return 0;
}
