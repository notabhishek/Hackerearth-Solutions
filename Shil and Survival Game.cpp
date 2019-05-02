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
long n;
cin>>n;
int arr[n];
for(int i=0;i<n;++i)
cin>>arr[i];
int left_max[n],right_max[n];
left_max[0]=arr[0];

for(int i=1;i<n;++i)
{
left_max[i]=left_max[i-1];
if(arr[i]>left_max[i])
left_max[i]=arr[i];
}
right_max[n-1]=arr[n-1];
for(int i=n-2;-1<i;--i)
{
	right_max[i]=right_max[i+1];
	if(right_max[i]<arr[i])
	right_max[i]=arr[i];
}

for(int i=0;i<n;++i)
{
	if(arr[i]>=left_max[i] || arr[i]>=right_max[i])
	cout<<i+1<<" ";
}
return 0;
}
