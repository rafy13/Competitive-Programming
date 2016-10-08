#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string mc,mn,str;
    int i,k,p,m;

    char c;
    mc="A000300HIL0JM0O0002TUVWXY5";

    mn="1SE0Z0080";

    while(cin>>str)
    {
        p=1;
        m=1;
        k=str.length();
        for(i=0;i<=((k/2)+1),str[i];i++)
        {
            if(str[i]!=str[k-1-i])
                p=0;
            if(str[i]>='A')
                c=mc[str[i]-'A'];
            else c=mn[str[i]-'1'];

            if(str[k-1-i]!=c)
                m=0;
        }
        if(p&&m)
            cout<<str<<" -- is a mirrored palindrome.\n\n";
        else if(p)
            cout<<str<<" -- is a regular palindrome.\n\n";
        else if(m)
            cout<<str<<" -- is a mirrored string.\n\n";
        else cout<<str<<" -- is not a palindrome.\n\n";

    }
    return 0;
}
