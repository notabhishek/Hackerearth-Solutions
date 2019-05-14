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

string s,t; cin>>s>>t; int a[26]={0};
fi(s.length()) a[s[i]-'a']++;
fi(t.length()) a[t[i]-'a']++;
int l=0;
bool flag=false;
fi(26)
{
    if(a[i]%2)
    {
        l+=a[i]-1;
        flag=true;
    }
    else
    l+=a[i];
}
if(flag) ++l;
cout<<l;


return 0;
}
