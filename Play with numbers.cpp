//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    long N,Q,L,R;

 cin>>N>>Q;
     long long int arr[N+1];
     long long int sum[N+1]={0};

    for(long i=1;i<=N;++i)
    {
        cin>>arr[i];
        sum[i]=arr[i]+sum[i-1];
    }
    for(long i=0;i<Q;++i)
    {
        cin>>L>>R;
      long long int s=0;

    s=(sum[R]-sum[L-1])/(R-L+1);
     cout<<s<<"\n";

    }
}
