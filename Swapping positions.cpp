//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github : https://github.com/becomeahacker

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define FOR(i,x,y) for(LL i = (x) ; i <= (y) ; ++i)
#define CLR(x,y) memset(x,y,sizeof(x))
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((LL)(x).size())
#define POPCOUNT __builtin_popcountll
#define ODD(x) (((x)&1)==0?(0):(1))
#define Set(N,p) N=((N)|((1LL)<<(p)))
#define Reset(N,p) N=((N)&(~((1LL)<<(p))))
#define Check(N,p) (!(((N)&((1LL)<<(p)))==(0)))
#define LL long long
#define LLU long long unsigned int
int N;
string a, b;
int miscnt(string a, string b){
    int cnt = 0;
    FOR(i,0,N-1){
        if(a[i] != b[i]) cnt++;
    }
    return cnt;
}
bool okay(int i, int j){
    string s1, s2;
    s1 = a, s2 = b;
    swap(s1[i], s1[j]);
    if(miscnt(s1, s2)<=1) return true;
    s1 = a, s2 = b;
    swap(s1[i], s2[j]);
    if(miscnt(s1, s2)<=1) return true;
    return false;
}
bool possible(){
    vector<int> List;
    FOR(i,0,N-1){
        if(a[i] != b[i]) List.pb(i);
    }
    if(SZ(List)<=1) return true;
    if(SZ(List) <= 3){
        FOR(i,0,SZ(List)-1){
            FOR(j,i+1,SZ(List)-1){
                if(okay(List[i], List[j])) return true;
            }
        }
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    FOR(cs,1,t){
        cin>>N>>a>>b;
        if(possible()) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
