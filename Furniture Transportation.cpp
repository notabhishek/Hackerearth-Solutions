//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
#define FIOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sc(a) scanf("%d ",&a);
#define ssc(a,b) scanf("%d %d ",&a,&b);
#define sssc(a,b,c) scanf("%d %d %d ",&a,&b,&c);
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define all(a) a.begin(),a.end()
#define forn(i,n) for(int i=0;i<n;i++)
#define forq(i,q,n) for(int i=q;i<n;i++)
#define form(i,n) for(int i=n;i>=0;i--)
#define forp(i,q,n) for(int i=q;i>=n;i--)
#define fi first
#define se second
#define RT return 0;
#define INF 1000000010
#define MOD 1000000007
#define MAXN 200010
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> tii;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef double du;
typedef long double ld;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int v[MAXN],s[MAXN];

int main(){
 int n,l,m,r=0;
 sssc(n,l,m);

 forq(i,1,n+1)sc(v[i])

 forq(i,1,n+1)s[i]=(v[i]>l);
 forq(i,1,n+1)s[i]+=s[i-1];

 forq(i,m,n+1)r+=(s[i]-s[i-m]==0);

 printf("%d",r);

 RT
}
