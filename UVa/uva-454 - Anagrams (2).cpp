#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>str;
    char c;
    string s,st;
    int t,i,j,l;
    scanf("%d",&t);
    getchar();
    getchar();
    map<string,vector<int>>ans;
    while(t--)
    {
        i=0;
        s="";
        while(getline(cin,st))
        {
            if(st=="")
                break;
            str.push_back(st);
            s="";
            for(j=0;str[i][j];j++)
            {
                if((str[i][j]>='a'&&str[i][j]<='z')||(str[i][j]>='A'&&str[i][j]<='Z'))
                    s+=tolower(str[i][j]);
            }
            sort(s.begin(),s.end());
            ans[s].push_back(i);
            i++;
        }
        for(map<string,vector<int>>::iterator p=ans.begin();p!=ans.end();p++)
        {
            l=p->second.size();
            for(i=0;i<l-1;i++)
                for(j=i+1;j<l;j++)
                    cout<<str[p->second[i]]<<"="<<str[p->second[j]]<<endl;
        }
    }
    return 0;

}
