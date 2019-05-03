//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int p1,p2;
long long int d;
long long int a;
p1=(2*220922)/116;
p2=(2*1937950)/343;
d=(p2-p1)/227;
a=(p1-115*d)/2;
cout<<(11631*(2*a+11630*d)/2);

return 0;
}
