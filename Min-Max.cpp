//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include<iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int min,max;
bool exists[101]={false}; int k;
for(int i=0;i<n;++i)
   {
       cin>>k;
       exists[k]=true;
   }
for(int i=1;i<101;++i)
    if(exists[i]==true)
{ min=i; i=100; }
for(int i=100;0<i;--i)
    if(exists[i]==true)
{ max=i; i=1; }
 int i;
for( i=min+1;i<max;++i)
    if(exists[i]==false)
    i=max;
if(i==max)
cout<<"YES";
else
    cout<<"NO";


return 0;
}
