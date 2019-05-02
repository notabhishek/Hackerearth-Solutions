//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,t,n,q=0,N,prime[26];
    char s[500];
    cin>>t;
    for(n=65;n<=90;++n)
    { int p=0;
        for(i=2;i<n;++i)
        {
        if(n%i==0)
        {
            p=-1; break;
        }
        }
        if(p==0)
        {prime[q]=n; ++q;}
    }

    for(n=97;n<=122;++n)
    { int p=0;
        for(i=2;i<n;++i)
        {
        if(n%i==0)
        {
            p=-1; break;
        }
        }
        if(p==0)
        {prime[q]=n; ++q;}
    }

    for(i=0;i<t;++i)
    {
        cin>>N>>s;

    for(int j=0;j<N;++j)
    { char rep;
       int dist=1000;
        for(int r=0;r<q;++r)
        {
            if(abs(s[j]-prime[r])<dist)
            {
            dist=abs(s[j]-prime[r]);
            rep=prime[r];
            }
        }
    s[j]=rep;
    }

     cout<<s<<endl;

    }

}
// Write your code here
