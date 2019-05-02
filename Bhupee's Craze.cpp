//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
using namespace std;
int unique(string str)
{
int i,j,c=0,l=str.length();
for(i=0;i<l;i++)
{
for(j=0;j<i;j++)
{
if(str[j]==str[i])
break;
}
if(j==i)
c++;
}
return c;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
bool flag=true;
string prev=""; //assigning an empty string
cin>>t;
while(t--)
{
int n,i;
cin>>n;
if(n==0) //prev str
{
flag=false;
cout<<prev<<endl;
}
int a[n+1]={0};
string str[n+1];
for(i=1;i<=n;i++)
{
cin>>str[i];
string temp=str[i];
a[i]=unique(temp);
}
int minValue=a[1];
for(i=2;i<=n;i++)
{
if(minValue>a[i])
minValue=a[i];
}
for(i=n;i>=1;i--)
{
if(unique(str[i])==minValue && flag)// flag will be false when n==0 ie already printed
{
cout<<str[i]<<endl;
break;
}
}
flag=true;
prev =str[i];
}
return 0;
}
}
