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

bool inverse(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]!=i+1)
            return false;
    }
    return true;
}

int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int t; cin>>t; while(t--){
int n; cin>>n; int a[n]; fi(n) cin>>a[i];
if(inverse(a,n)) cout<<"inverse\n"; else cout<<"not inverse\n";
}



return 0;
}
