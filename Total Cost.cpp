//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P,S,T,H,x,cost=0;
    cin>>P>>S>>T>>H>>x;
    for(int i=0;i<x;++i)
    {
        if(S<=T)
        cost+=H;
        else
        cost+=P;
        --S;

    }
    cout<<cost;
    return 0;
}
