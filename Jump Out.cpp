//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
int ent;

cin>>n;
bool flag=true;
int ans;
for(int i=0;i<n;++i)
{
    cin>>ent;
    if(flag)
    if(ent>=n-i)
    {
        flag=false;
        ans=i+1;
    }
}
cout<<ans;



return 0;
}
