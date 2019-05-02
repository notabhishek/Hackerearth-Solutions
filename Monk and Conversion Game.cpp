//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include<bits/stdc++.h>
#define pb(a) push_back(a)
#define pf(a) push_front(a)
#define mp(a,b) make_pair(a,b)
typedef long long int lli ;
typedef long long ll;
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
int n;
long ent;
ll sa,sb;
while(t--)
{
	cin>>n;
	sa=0;
	sb=0;
	int i=n;
	while(i--)
	{
		cin>>ent;
		sa+=ent;
	}
	while(n--)
	{
		cin>>ent;
		sb+=ent;
	}
	if(sa==sb)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}


return 0;
}
