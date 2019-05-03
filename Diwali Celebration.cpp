//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
int a,k,n;
cin>>t;
while(t--)
{
cin>>a>>k>>n;
cout<<a+k*(n-1)<<"\n";
}
return 0;
}
