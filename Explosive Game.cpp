//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

int n, q;
cin>>n>>q;
ll sum = 0;
ll a[n];
ll A, B;
for (int i = 0; i < n; i++)
{

cin>>A>>B;
sum += min(A, B);
a[i] = abs(A - B);
}
sort(a, a + n);
for (int i = 0; i < n; i += 2)
{
if (a[i] != a[i + 1])
{
sum = -1;
break;
}
sum += a[i];
}
while(q--)
{
ll x;
scanf("%lld", &x);
if (x == sum)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
}

}
