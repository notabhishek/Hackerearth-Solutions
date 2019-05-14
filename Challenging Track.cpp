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

int t;
cin>>t;
while(t--)
{
int n;
lli p,sum;
cin>>n>>p;
long h,contri;
cin>>contri; p-=contri;
for(int i=0;i<(n-1);++i)
    {
        cin>>h;
        if(h%2==0)
        --h;
        contri=h-i;
        if(contri<0) contri=0;
        cout<<contri<<" ";
        p-=contri;
    }

if(0>p)
    cout<<"No\n";
else
    cout<<"Yes "<<p<<"\n";

}


return 0;
}
