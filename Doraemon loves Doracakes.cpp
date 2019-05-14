//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github : https://github.com/becomeahacker

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
using namespace std;


int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
cin>>t;
while(t--)
{
    int n;      cin>>n;
    char a[n];   cin>>a;
    int tmax;   cin>>tmax;
    int t[n];
    for(int i=0;i<n;++i) t[i]=tmax;

    for(int i=0;i<n;++i)
    {
        if(a[i]=='*') // Doracake
        {
            int left=-1,right=-1;
            for(int j=i-1;j>-1;--j)
                if(a[j]=='P') {left =j; j=-1;}

             for(int j=i+1;j<n;++j)
                if(a[j]=='P') {right =j; j=n;}

                if(left==-1) left = right;
                if(right==-1) right = left;

                if( (right-i)<(i-left))
                {a[right]='.'; a[i]='P'; t[right]-= (right-i);}
                else
                {a[left]='.'; a[i]='P'; t[left]-= (i-left);}
        }
    }
    bool flag=true;
    for(int i=0;i<n;++i)
    if(t[i]<0) {flag=false; i=n;}
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

}


return 0;
}
