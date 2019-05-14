//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=1,q;
        char s[n];
        s[0]='a';

        bool flag=true;
        cin>>q;
        p=q;
        for(int i=1;i<n && flag;++i)
        {
            cin>>q;
            if(q==p+1)
            {
               s[i]=s[i-1]+1;
               p=q;
            }
            else if(q==p)
            {
                s[i]=s[i-1];
                p=q;
            }
            else
            {
                flag=false;
            }

        }

        if(flag)
            cout<<s<<"\n";
        else
            cout<<-1<<"\n";
    }

    return 0;
}
