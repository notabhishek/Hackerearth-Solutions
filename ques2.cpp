//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n,x,y;
long long int ent;
cin>>n>>x>>y;
bool flag=true;
while(n--)
{
cin>>ent;
if(ent<x || ent>y)
{
    flag=false; n=0;

}
}
if(flag)
    cout<<"YES";
else
    cout<<"NO";


return 0;
}
