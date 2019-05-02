//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
typedef long long int lli ;
typedef long long ll;
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
int m;
int x1,x2,y1,y2;
cin>>n>>m;
long p;
long long a[n][n];
for(int i=0;i<n;++i)
for(int j=0;j<n;++j)
a[i][j]=0;
while(m--)
{
	cin>>p>>x1>>y1>>x2>>y2;
	for(int i=x1-1;i<x2;++i)
	for(int j=y1-1;j<y2;++j)
	a[i][j]=a[i][j]^p;
}
for(int i=0;i<n;++i)
{
for(int j=0;j<n;++j)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
