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
lli factorials[1000001]={0};
lli fact(int n)
{
    if(factorials[n])
        return factorials[n];
    if(n==0) return 1;
    factorials[n] = (n*fact(n-1))%mod;
    return factorials[n];
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;cin>>t;while(t--)
{
    int n; cin>>n;
    cout<<(3+3*fact(n))%mod<<"\n";
}


return 0;
}
