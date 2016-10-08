#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,i,j,a,s;
    cin>>n;
    int v[n];
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n;i++)
    {
        j=0;

        while(1)
        {
            j++;
            a=v[i];

            s=0;
            while(a!=0)
                 {
                    s=s*10+(a%10);
                    a/=10;

                 }

           if(s==v[i]&&j!=1)
           break;
           else v[i]+=s;//cout<<s<<" "<<a<<" "<<v[i]<<endl;
        }
        cout<<j-1<<" "<<s<<endl;


    }
    return 0;
}
