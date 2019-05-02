//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc(ll a, ll b, ll x, ll n){
return ((a*x) + b)%n;
}
int main()
{
    long t;
    cin>>t;
while(t--)
{
long n;
cin >> n;
int max_pocket[n];
int pocket[n];
for (int i = 0; i < n; i++){
cin >> max_pocket[i];
pocket[i] = 0;
}

ll x, a, b, counter;
ll count_open = 0;
cin >> x >> a >> b >> counter;

while(counter--){

++pocket[x];
if(pocket[x] == max_pocket[x]){
++count_open;
pocket[x] = 0;
}
x = calc(a,b,x,n);
}
cout << count_open << endl;
}
return 0;
}
