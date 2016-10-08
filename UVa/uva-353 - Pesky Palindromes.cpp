#include<bits/stdc++.h>
using namespace std;
string pal,a;
int c=0;
int pl(string s,int len)
{
     for(int i=0,j=len-1;i<len/2;i++,j--)
     {
         if(s[i]!=s[j])
            return 0;
     }
     return 1;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int len=s.size();
        int l;
        int r=0,c=0;
        map<string,int>mp;
        for(int i=0;i<len;i++)
        {
            for(int j=1;i+j<=len;j++)
            {
                pal=s.substr(i,j);
                if(mp[pal]>=1)
                    continue;
                mp[pal]++;

                l=pal.size();
                if(pl(pal,l))
                c++;
            }
        }
        cout<<"The string '"<<s<<"' contains "<<c<<" palindromes."<<endl;
        c=0;
        mp.clear();
    }

}
