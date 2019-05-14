//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github : https://github.com/becomeahacker

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
using namespace std;

int seg(long a)
{
    int s[]={6,2,5,5,4,5,6,3,7,6};
    int ans=0;
    if(a==0) ans=s[0];
    else
    {
        while(a!=0)
        {
            ans+= s[ a%10 ];
            a/=10;
        }
    }
    return ans;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    long a[n]; long minseg,minno;
    for(int i=0;i<n;++i) cin>>a[i];

    minno=a[0];
    minseg=seg(minno);

    for(int i=1;i<n;++i)
    {
        int newseg=seg(a[i]);
        if(newseg<minseg)
        {
            minseg=newseg;
            minno = a[i];
        }
    }
    cout<<minno<<"\n";

}



return 0;
}
