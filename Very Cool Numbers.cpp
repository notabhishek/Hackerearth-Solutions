//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include<bits/stdc++.h>
using namespace std;
long coolness(long n)
{
if(n<5)
    return 0;
if((n&1) && (!((n>>1)&1)) && ((n>>2 )&1) )
    return 1+coolness(n>>2);
else
    return coolness(n>>1);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
long r;
int k;
cin>>t;
while(t--)
{
    long ans=0;
    cin>>r>>k;
    for(long i=1;i<=r;++i)
        if(!(coolness(i)<k))
        ++ans;
    cout<<ans<<"\n";
}
return 0;
}
