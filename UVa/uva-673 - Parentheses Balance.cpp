//accepted code
#include<stdio.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{

    string s;
    int i,j,l,f,n;
    cin>>n;
    getline(cin,s);
    while(n--)
    {
        getline(cin,s);
        stack<char>p;
        l=s.length();
        f=1;
        char c;
        if(l%2!=0||s[0]==')'||s[0]==']')
            f=0;
        else
        {
        for(i=0;i<l;i++)
        {
            if(s[i]=='('||s[i]=='[')
                p.push(s[i]);
            else
            {
                if(p.empty())
                {
                    f=0;
                    break;
                }
            c=p.top();
            if(((s[i]==')'&&c=='(')||(s[i]==']'&&c=='['))&&!p.empty())
                p.pop();
            else
            {
                f=0;
                break;
            }

        }
        }
        }

        cout<<(p.empty()&&f ? "Yes" : "No")<<endl;

    }
    return 0;
}
