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
int t=7;
string day;
int val,one[7]={0},sum=0;
for(int tc=0;tc<t;++tc)
{
 cin>>day;
 val=0;
 int l=day.length();
 for(int i=0;i<l;++i)
 {
 	if(day[i]=='1')
 	++val;
 }
 one[tc]=val;
 sum+=val;
}
double dev=0;
double x=double(sum)/7;
for(int i=0;i<7;++i)
{
	double temp=one[i]-x;
	dev+=temp*temp;
}
dev/=7;
cout<<fixed<<showpoint<<setprecision(4)<<sqrt(dev);


return 0;
}
