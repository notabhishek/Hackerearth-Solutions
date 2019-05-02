//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int N;
 cin>>N;
for(int i=1;N>0;++i)
{
    if(N<=i && N>0)
    {cout<<"Patlu"; break;}
    else
    N-=i;

    if(N<=2*i && N>0)
    {cout<<"Motu"; break;}
    else
    N-=2*i;
}

}
