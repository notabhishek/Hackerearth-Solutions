
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
using namespace std;


int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
long n,q,l,r; cin>>n>>q; ++n;
ll a[n]; a[0]=0;
for(int i=1;i<n;++i) {cin>>a[i]; a[i]+=a[i-1]; }
while(q--) {cin>>l>>r; cout<< (a[r]-a[l-1])/(r-l+1)<<"\n";}
return 0;
}
