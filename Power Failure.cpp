//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v,va,v1;
        for(int i=0;i<=m;i++) va.push_back(0);
        for(int j=2;j<=sqrt(m);j++)
        {
            if(va[j]==0)
            {
                for(int k=j*j;k<=m;k+=j) va[k]=1;
            }
        }
        for(int l=2;l<va.size();l++) if(va[l]==0) v.push_back(l);
        int a[n],b[100001],numb=0;
        for(int e=1;e<=m;e++)
        {
            if(e>v[numb]&&numb<v.size()) numb++;
            int numa=v.size()-numb;
            numa%=1000000007;
            b[e]=m-e+1-numa;
            b[e]%=1000000007;
        }
        for(int o=0;o<n;o++) cin>>a[o];
        sort(a,a+n);
        long long num1=1;
        for(int p=n-1;p>=0;p--)
        {
            num1%=1000000007;
            long num=b[a[p]];
            num-=n-1-p;
            num%=1000000007;
            num1%=1000000007;
            num1*=num;
            if(a[p]>m)
            {
                num1=0;
                break;
            }
        }
        num1%=1000000007;
        cout<<num1<<endl;
    }
    return 0;
}
