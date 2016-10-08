#include<iostream>
#include<string.h>
using namespace std;

main()
{
    int c[10],n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(c,0,sizeof(c));
        for(int i=1;i<=n;i++)
        {
            int tmp=i;
            while(tmp)
            {
                c[tmp%10]++;
                tmp/=10;
            }
        }

        for(int i=0;i<=9;i++)
            {
                if(i!=0)
                    cout<<" ";
                cout<<c[i];
            }
        cout<<endl;
    }
    return 0;
}
