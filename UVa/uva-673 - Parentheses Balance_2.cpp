//not submitted
#include<stdio.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int flag,i,length,testCase;
    string s;
    cin>>testCase;
    getline(cin,s);
    while(testCase--)
    {
        getline(cin,s);
        flag=1;
        length=s.length();
        stack<char>stk;
        if(s[0]==')'||s[0]==']'||length%2!=0||length==0)
            flag=0;
        else for(i=0;i<length;i++)
        {
            char c=stk.top();
            if(s[i]=='('||s[i]=='[')
                stk.push(s[i]);
            else if ((s[i] == ')' && c != '(')|| (s[i] == ']' && c != '['))
            {
                flag=0;
                break;
            }
            else if(stk.empty())
            {
                flag=0;
                break;
            }
            else stk.pop();
        }
        cout<<((stk.empty()&&flag)? "Yes":"No")<<endl;


    }
    return 0;
}


