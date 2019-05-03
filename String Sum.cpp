
//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int l=s.length();
int w=0;
for(int i=0;i<l;++i)
{
w+=int(s[i])-96;
}
cout<<w;


return 0;
}
