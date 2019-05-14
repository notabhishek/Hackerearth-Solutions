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
    int t0,t1,t2,v1,v2,d;
    cin>>t0>>t1>>t2>>v1>>v2>>d;
    int mtime=-1;
    if(t0<=t1 && t0<=t2)
    {
        int a =ceil( t1+ float(d*60)/float(v1) );
        int b =ceil( t2+ float(d*60)/float(v2) );
        mtime=min(a,b);
    }
    else
    if(t0<=t1)
    {
        mtime = ceil( t1+ float(d*60)/float(v1) );
    }
    else
        if(t0<=t2)
    {
        mtime = ceil( t2+ float(d*60)/float(v2) );
    }
    cout<<mtime<<endl;
}


return 0;
}
