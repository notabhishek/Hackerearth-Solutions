//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github : https://github.com/becomeahacker

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define fi(n) for(int i=0;i<n;++i)
#define fj(n) for(int j=0;j<n;++j)
#define f1(n) for(int i=1;i<n;++i)
#define pii pair<int,int>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int t; cin>>t; while(t--) {
ll s,x; int n; cin>>s>>x>>n;
ll speed[n]; fi(n) cin>>speed[i];
ll mspeed = 0,freq=1;
f1(n)
{
if(speed[i]==speed[mspeed])
    ++freq;
else if(speed[i]>speed[mspeed])
{
    mspeed=i;
    freq=1;
}
}
if(freq==1)
    cout<<mspeed+1<<"\n";
else
    cout<<"Many Roads\n";
}

return 0;
}
