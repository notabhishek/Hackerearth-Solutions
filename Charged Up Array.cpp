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
using namespace std;


int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n; cin>>n;
    lli ans=0 , element , charge = (1<<(n-1)) ;
    while(n--) {cin>>element; if(element>=charge) ans+=element; ans%=mod;}
    cout<<ans%mod<<"\n";
}
return 0;
}
