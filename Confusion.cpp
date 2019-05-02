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
long n,q,ent;
cin>>n>>q;
long a[n];
for(int i=1;i<=n;++i)
cin>>a[i];
bool hasnt_come[1000000];
for(long i=1;i<1000001;++i)
hasnt_come[i]=true;
hasnt_come[a[n]]=false;
long distinct[n];
distinct[n]=1;

for(long i=n-1;0<i;--i)
{
    distinct[i]=distinct[i+1];
    if(hasnt_come[a[i]])
    {
        ++distinct[i];
        hasnt_come[a[i]]=false;
    }
}
while(q--)
{
    cin>>ent;
    cout<<distinct[ent]<<"\n";
}



return 0;
}
