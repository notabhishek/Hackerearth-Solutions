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


cin>>t;
long long int n;
while(t--)
{
cin>>n;
n=n/3;
if(n==0)
    cout<<"-1\n";
else if(n==1)
    cout<<"1 2 3\n";
    else
    cout<<n<<" "<<2*n<<" "<<3*n<<"\n";
}



return 0;
}
