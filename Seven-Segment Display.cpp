//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

long seg(string str)
{
    long ans=0;
    int n=str.length();
    for(int i=0;i<n;++i)
    {
        switch(str[i])
        {
            case '1' : {ans+=2; } break;
            case '2' : {ans+=5; } break;
            case '3' : {ans+=5; } break;
            case '4' : {ans+=4; } break;
            case '5' : {ans+=5; } break;
            case '6' : {ans+=6; } break;
            case '7' : {ans+=3; } break;
            case '8' : {ans+=7; } break;
            case '9' : {ans+=6; } break;
            case '0' : {ans+=6; } break;
        }

    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        long n=seg(str);
        //cout<<n<<"*\n";
        if(n%2)
        {
            cout<<7;
            n=n>>1;
            for(long i=1;i<n;++i)
            cout<<1;
            cout<<"\n";
        }
        else
        {
             n=n>>1;
            for(long i=0;i<n;++i)
            cout<<1;
            cout<<"\n";
        }
    }

    return 0;
}
