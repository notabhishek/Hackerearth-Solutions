//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        long int b[n],a[n],j,s=0,s1=0;
        for(j=0;j<n;j++)
        {
            cin>>b[j];
            if(b[j]>s)
            s=b[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]>s1)
            s1=a[j];
        }
        if(s>s1)
        cout<<"Bob"<<endl;
        else if(s1>s)
        cout<<"Alice"<<endl;
        else
        cout<<"Tie"<<endl;
    }
    return 0;
}
