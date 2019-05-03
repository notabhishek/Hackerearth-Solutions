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
int n;
char ch;
int count;
cin>>t;
while(t--)
{
    cin>>n;
    count=0;
    bool flag=true;
    while(n--)
    {
        cin>>ch;
        if(ch>='0' && ch<='9')
        {
            if(flag)
            { ++count; flag=false; }

        }
        else
        {
            flag=true;
        }
    }
    cout<<count<<"\n";
}

return 0;
}
