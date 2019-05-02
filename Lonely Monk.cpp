//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
#define pb(a) push_back(a)
#define pf(a) push_front(a)
#define mp(a,b) make_pair(a,b)
typedef long long int lli ;
typedef long long ll;
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
long n;
cin>>n;
long ent;
int a[n];
cin>>ent;
a[0]=ent%2;

for(long i=1;i<n;++i)
{
cin>>ent;
a[i]=(ent+a[i-1])%2;
}
ll ans=0;
int ones[n]={0};
ones[n-1]=a[n-1];
for(long i=n-2;-1<i;--i)
{
ones[i]=ones[i+1];
if(a[i])
++ones[i];
}
for(long i=0;i<n;++i)
{
	if(a[i])
	ans+=ones[i]-1;
	else
	ans+=n-i-ones[i];
}

cout<<ans;
return 0;
}
