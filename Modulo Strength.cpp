#include<iostream>
using namespace std;int main(){int n,k;cin>>n>>k;long int a,A=0,b[k]={0};while(n--){cin>>a;++b[a%k];}while(--k>-1){A+=b[k]*(b[k]-1);}cout<<A;return 0;}
