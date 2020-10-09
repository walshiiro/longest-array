
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,maxx=0,vtmax=0;
    int a[9999],
            dp[9999],
            tv[9999];
    dp[0]=0;
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(dp[j]>=dp[i]&&a[i]>a[j])
            {
                dp[i]=dp[j]+1;
                tv[i]=j;
            }
            if(dp[i]>maxx)
            {
                maxx=dp[i];
                vtmax=i;
            }
        }


    }
    while(vtmax!=0)
    {
        cout<<a[vtmax]<<" ";
        vtmax=tv[vtmax];
    }




}
