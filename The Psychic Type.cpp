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
cin>>n;
int arr[n];
int s,e;

for(int i=1;i<=n;++i)
    cin>>arr[i];
    cin>>s>>e;
    bool flag=false;
if(s==e)
    {
        cout<<"Yes"; return 0;
    }
while(n--)
{
    if(arr[s]==e)
    {
    cout<<"Yes"; return 0;
    }
    s=arr[s];
}
    cout<<"No";
return 0;
}
