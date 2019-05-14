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
bool inr(int a)
{
    return a>=0 && a<=255;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string s; cin>>s;
vector <int> pos; //pos of dots
fi(s.length())
{
    if(s[i]=='.')
        pos.pb(i);
}
if(pos.size()!=3) cout<<"NO";
else {
    if(pos[0]==0 || pos[2]==(s.length()-1) || pos[1]==pos[0]+1 || pos[2]==pos[1]+1 )
    cout<<"NO";
    else
    {
    int four=0,three=0,two=0,one=0;
    int k=1;
    for(int i=s.length()-1;i>pos[2];--i) {four +=k*(s[i]-'0'); k*=10;}
    k=1;
    for(int i=pos[2]-1;i>pos[1];--i) {three +=k*(s[i]-'0'); k*=10;}
        k=1;
    for(int i=pos[1]-1;i>pos[0];--i) {two +=k*(s[i]-'0'); k*=10;}
        k=1;
    for(int i=pos[0]-1;i>-1;--i) {one +=k*(s[i]-'0'); k*=10;}
    //cout<<one<<" "<<two<<" "<<three<<" "<<four<<" ";
    if(inr(one) && inr(two) && inr(three) && inr(four))
        cout<<"YES";
    else
        cout<<"NO";
    }
}
return 0;
}
