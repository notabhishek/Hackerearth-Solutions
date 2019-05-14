//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
using namespace std;

int main()
{

ll h;
long n;
long l,high=1;
char b;
cin>>h>>n;
// left mid right block  LMR

map <long , char > t;

for(int i=1;i<=n;++i)
{
    cin>>l>>b;  //level , block
    high=max(high,l);

    auto level = t.find(l);

    if(level==t.end())
    {
        switch(b)
        {
            case 'L' : t[l]='M'+'R';break;
            case 'M' : t[l]='L'+'R';break;
            case 'R' : t[l]='L'+'M';
        }
    }

    else
    {
        switch(b)
        {
            case 'L' : level->second-='L';break;
            case 'M' : level->second-='M';break;
            case 'R' : level->second-='R';
        }

        if ( ( level->second == 'L' || level->second=='R') && l<high )
        {
            cout<<i;
            return 0;
        }
    }
}
cout<<"-1";
    return 0;
}
