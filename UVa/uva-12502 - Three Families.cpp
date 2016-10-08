#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float x,y,z,t;
    int ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x<y)
        {
            swap(x,y);
            ans=(int)((z/(x+y))*(2*x-y));
            ans=(int)z-ans;
        }
        else ans=(int)((z/(x+y))*(2*x-y));
        cout<<ans<<endl;
    }
    return 0;

}
