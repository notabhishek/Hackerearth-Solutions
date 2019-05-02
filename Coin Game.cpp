//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int num(long long n)
{
    if(n%2)
        return 0;
    return 1+num(n/2);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;

cin>>t;
int n;
long long ans;
long long ent;
while(t--)
{
    ans=0;
    cin>>n;
    while(n--)
    {
        cin>>ent;
        ans+=num(ent);
    }
    if(ans%2)
        cout<<"Charlie\n";
    else
        cout<<"Alan\n";


}



return 0;
}
