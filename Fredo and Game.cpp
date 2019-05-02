//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
long N;
long A;
cin>>t;
while(t--)
{
cin>>A>>N;
int val;
bool flag=true;
for(long i=0;i<N;++i)
{
    if(A==0 && flag)
    {
        cout<<"No "<<i<<"\n";
        flag=false;
    }
    cin>>val;
    if(val)
        A+=2;
    else
        --A;
}
if(flag)
{
    cout<<"Yes "<<A<<"\n";
}
}



return 0;
}
