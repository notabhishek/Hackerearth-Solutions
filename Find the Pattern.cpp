
//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long n;
cin>>n;
long ent;
long max,min;
cin>>ent;
max=ent;
min=ent;
--n;
while(n--)
{
    cin>>ent;
    if(ent>max)
        max=ent;
    if(ent<min)
        min=ent;
}
cout<<max+min;


return 0;
}

