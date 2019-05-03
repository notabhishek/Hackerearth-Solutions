//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
long solve(string s)
{
int l=s.length()-1;
long long int val=s[0]-'0';
for(int i=1;i<l;i+=2)
{
if(s[i]=='+')
val+=s[i+1]-'0';
else
val-=s[i+1]-'0';
}
return val;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long l;
cin>>l;
string s;
cin>>s;
long long int val;
long long int max=solve(s);
while(--l)
{
cin>>s;
val=solve(s);
if(val>max)
    max=val;
}
cout<<max;

return 0;
}
