#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{

    int day,dc,y,d,t;
    map<string,int> haabmonth={
        {"pop",0},
        {"no",1},
        {"zip",2},
        {"zotz",3},
        {"tzec",4},
        {"xul",5},
        {"yoxkin",6},
        {"mol",7},
        {"chen",8},
        {"yax",9},
        {"zac",10},
        {"ceh",11},
        {"mac",12},
        {"kankin",13},
        {"muan",14},
        {"pax",15},
        {"koyab",16},
        {"cumhu",17},
        {"uayet",18}};
    char c[22][10]={
        "imix",
        "ik",
        "akbal",
        "kan",
        "chicchan",
        "cimi",
        "manik",
        "lamat",
        "muluk",
        "ok",
        "chuen",
        "eb",
        "ben",
        "ix",
        "mem",
        "cib",
        "caban",
        "eznab",
        "canac",
        "ahau"};
    string str;
    scanf("%d",&t);
    printf("%d\n",t);
    while(t--)
    {
        scanf("%d.",&d);
        cin>>str>>y;
        day = y*365+haabmonth[str]*20+d;
        printf("%d %s %d\n",day%13+1,c[day%20],day/260);
    }

    return 0;
}
