/**
The main problem of this problem is to understand the problem well. :P

There's 2 parts of this problem.
1.Finding the shortest length of the string that contains the both name as sub-sequences.
2.Finding the number of unique shortest string that contains the both name as sub-sequences.

    1. For the 1st part answer is — ans=a.size() + b.size() — lcs(0,0);

    2. For the 2nd part find the lcs string.
       If a[i]==b[j] go to call(i+1,j+1) else check which one
       is greater between lcs(i+1,j) and lcs(i,j+1).
       If lcs(i+1,j) is greater go to call(i+1,j),
       if lcs(i,j+1) is greater go to call(i,j+1) and
       if both are equal, then call(i+1,j)+cal(i,j+1).

Base Case: when you reach at the end of any string return 1;

Critical Case: when you are finding lcs(0,0) do memoization even
for the base case. I mean if i==a.size() return dp[i][j]=0;

**/
#include<bits/stdc++.h>
using namespace std;
int dp[mx][mx];
int dp1[mx][mx];

int lcs1(int i,int j)
{

}

int lcs(int i,int j)
{
    if(i==l1||j==l2)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(str[i]==str[j])
        return dp[i][j]=1+lcs(i+1,j+1);
    if(str[i]!=str[j])
        return dp[i][j]=max(lcs(i+1,j),lcs(i,j+1));
}

int l1,l2;
int main()
{
    int t,cs=0;
    string str1,str2;
    while(t--)
    {
        cin>>str1>>str2;
        l1=str1.length();
        l2=str2.length();
        len=lcs(0,0);

    }
}



























