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
string s; cin>>s; char a[]={'l','o','v','e'}; int p=0;
fi(s.length()) {if(s[i]==a[p]) ++p; if(p==4) {cout<<"I love you, too!"; return 0;}}
cout<< "Let us breakup!";
return 0;
}
