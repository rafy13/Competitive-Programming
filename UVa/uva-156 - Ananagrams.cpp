#include<bits/stdc++.h>
using namespace std;
struct s{
    int i,j;
    s()
    {
        i=0;
        j=0;
    }
};
int main()
{
    char str[1010][22];
    map<string,s>cnt;
    string c;
    int i=0;
    while(scanf("%s",&str[i]))
    {
        if(str[i][0]=='#')
            break;
        int l = strlen(str[i]);
        c=str[i];
        for(int t=0;t<l;t++)
            c[t]=tolower(c[t]);
        sort(c.begin(),c.end());
        if(cnt[c].j==0)
            cnt[c].i=i;
        cnt[c].j++;
        i++;
    }
    for(map<string,s>::iterator p=cnt.begin();p!=cnt.end();++p)
    {
        int i = p->second.j;
        if(i==1)
            cout<<str[p->second.i]<<endl;
    }
    return 0;
}

