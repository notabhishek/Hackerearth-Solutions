//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;

int bits(long n)
{
    int a=1;
    while(n!=1)
    {
        ++a;
        n=n>>1;
    }
    return a;
}

int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
//cout.tie(NULL);
long n,q;

//cin>>n>>q;
n=read_int();
q=read_int();
long a[n+1];
a[0]=0;
long ent;
for(long i=1;i<=n;++i)
{
    ent=read_int();
    a[i]=a[i-1];
    a[i]+=bits(ent);
   // cout<<a[i]<<" ";
}
cout<<"\n";
long l,r;
while(q--)
{
l=read_int();
r=read_int();
if((a[r]-a[l-1])&1)
cout<<"Mishki\n";
else
cout<<"Hacker\n";
}

return 0;
}



