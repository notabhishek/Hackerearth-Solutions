//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
using namespace std;


int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n,i,j;
ll p;
cin>>n>>i>>j>>p;
for(int x=0;x<n;++x)
{
for(int y=0;y<n;++y)
cout<<p-max(abs(y-j),abs(x-i))<<" ";
cout<<"\n";
}
return 0;
}
