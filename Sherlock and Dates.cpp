//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
#define FIOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sc(a) scanf("%d ",&a);
#define ssc(a,b) scanf("%d %d ",&a,&b);
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
#define MAXN
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

int main(){
 int t;
 sc(t);

 forn(ii,t){
  int x,y,z,a,b,c,r=0;
  scanf("%d:%d:%d %d:%d:%d ",&a,&b,&c,&x,&y,&z);

  forq(i,c+1,z)if(i%100<14 && i%100>2)r++;

  if(c!=z){
   if(c%100>2 && c%100<14)if(b+1<c%100 || (b+1==c%100 && a+2<=c%100))r++;
   if(z%100>2 && z%100<14)if(y+1>z%100 || (y+1==z%100 && x+2>=z%100))r++;
  }else if(c%100>2 && c%100<14){
   int u=z%100-2,v=z%100-1;
   if(v==b && u>=a)r++;
   else if(v==y && u<=x)r++;
   else if(v>b && v<y)r++;
  }

  printf("%d\n",r);
 }

 RT
}
