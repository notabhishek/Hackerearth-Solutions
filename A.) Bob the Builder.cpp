//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long n;
cin>>n;
long long int num[n];
for(long i=0;i<n;++i)
{
cin>>num[i];
}
sort(num,num+n);

long clen=1;
long max_len=-1;
long long int v=num[0];
long long int ans;
for(long i=1;i<n;++i)
{
    if(num[i]==v)
    {
        ++clen;
    }
    else
    {
        if(max_len<clen)
           {
            max_len=clen;
            ans=num[i-1];
           }
        clen=1;
        v=num[i];
    }
}
cout<<ans;
return 0;
}
