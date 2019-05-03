//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long t;

cin>>t;
long long n;
while(t--)
{
cin>>n;
if(n%3==0 || n%5==0)
cout<<(3*((n/3)*((n/3)+1)/2))+(5*((n/5)*((n/5)+1)/2))-(15*(((n/15)*((n/15)+1))/2))-n<<"\n";
else
cout<<(3*((n/3)*((n/3)+1)/2))+(5*((n/5)*((n/5)+1)/2))-(15*(((n/15)*((n/15)+1))/2))<<"\n";
}



return 0;
}

