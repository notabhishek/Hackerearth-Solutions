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
string s;
while(t--)
{
cin>>s;
int l=s.length();
int broken=0;
if(s[0]=='W')     //for s[0]
{
	if(l>2)
	{
		if(s[1]=='B' || s[2]=='B')
		++broken;
	}
	else if(l>1)
	{
		if(s[1]=='B')
		++broken;
	}
}
if(l>1)
if(s[1]=='W')			// for s[1]
{
	if(l>3)
	{
		if(s[0]=='B' || s[2]=='B' || s[3]=='B')
		++broken;
	}
	else if(l>2)
	{
		if(s[0]=='B' || s[2]=='B')
		++broken;
	}
	else
	if(s[0]=='B')
	++broken;
}

if(l>2)
if(s[l-1]=='W')  		//for l-1
{
	if(l>3)
	{
		if(s[l-2]=='B' || s[l-3]=='B')
		++broken;
	}
	else
	{
		if(s[l-2]=='B')
		++broken;
	}
}
if(l>2)
if(s[l-2]=='W')   //for s[l-2]
{
	if(l>4)
	{
		if(s[l-4]=='B' || s[l-3]=='B' || s[l-1]=='B')
		++broken;
	}
	else if(l>3)
	{
		if(s[l-3]=='B' || s[l-1]=='B')
		++broken;
	}
	else if(s[l-1]=='B')
		 ++broken;
}
for(int i=2;i<l-2;++i)
{
	if(s[i]=='W')
	{
	if(s[i-1]=='B' || s[i+1]=='B'|| s[i-2]=='B' || s[i+2]=='B')
	++broken;
	}
}
cout<<broken<<"\n";
}

return 0;
}
