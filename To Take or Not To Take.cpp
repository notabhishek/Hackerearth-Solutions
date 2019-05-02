//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
#define ll long long int
using namespace  std;
ll dp[100];ll dp2[100];

int main()
{
   int t;
   cin>>t;
   int n;int vv;
   while(t--)
   { char x;//int nn;
    cin>>n;
    for(int i=0;i<=n;i++){dp[i]=1;dp2[i]=1;}
    for(int i=1;i<=n;i++)
     {dp[i]=max(dp[i],dp[i-1]);
     dp2[i]=min(dp2[i],dp2[i-1]);
       cin>>x;
       if(x!='N')
       {
        cin>>vv;
       }
       if(x=='+')
       {
        for(int j=0;j<i;j++)
        {
           dp[i] = max(dp[j],max(dp[j]+vv,dp2[j]+vv));
           dp2[i] = min(dp2[j],min(dp[j]+vv,dp2[j]+vv));
        }
       }
       if(x=='*')
       {
        for(int j=0;j<i;j++)
        {
           dp[i] = max(dp[j],max(dp[j]*vv,dp2[j]*vv));
           dp2[i] = min(dp2[j],min(dp[j]*vv,dp2[j]*vv));        }
       }
       if(x=='/')
       {
        for(int j=0;j<i;j++)
        {
           dp[i] = max(dp[j],max(dp[j]/vv,dp2[j]/vv));
           dp2[i] = min(dp2[j],min(dp[j]/vv,dp2[j]/vv));
        }
       }
        if(x=='-')
       {
        for(int j=0;j<i;j++)
        {
           dp[i] = max(dp[j],max(dp[j]-vv,dp2[j]-vv));
           dp2[i] = min(dp2[j],min(dp[j]-vv,dp2[j]-vv));
        }
       }
         if(x=='N')
       {
        for(int j=0;j<i;j++)
        {
           dp[i] = (max(dp[j],max(-1*dp[j],-1*dp2[j])));
           dp2[i] = (min(dp2[j],min(-1*dp2[j],-1*dp[j])));
        }
       }
 //cout<<dp[i]<<" "<<dp2[i]<<"\n";
     }
     cout<<dp[n]<<"\n";
   }
   return 0;
}
