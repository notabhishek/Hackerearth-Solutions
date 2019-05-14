//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int i,max,mv;
int f[10]={0};
for(i=0;i<s.length();i++)
{
f[s[i]-'0']++;
}
max=f[0];
mv=0;
for(i=1;i<10;i++)
{
if(f[i]>max)
{
max=f[i];
mv=i;
}
}
cout<<mv<<"\n";
}
}
