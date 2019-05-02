//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
typedef long long int lli ;
typedef long long ll;
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll a,b,c;
cin>>a>>b>>c;
ll k=(b-a)%c;

if(k==0 && (b-a)/c >-1)
cout<<"YES\n";
else
cout<<"NO\n";

return 0;
}
