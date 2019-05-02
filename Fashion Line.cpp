//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cassert>
#include<cstdio>
using namespace std;
int cs,n,l,r,i,j,k,a,b,s;
int B[257];
char x[10001],y[63];
int S[10001];
int main()
{
srand(29173);
  scanf("%d",&cs);
  while(cs--)
  {
    scanf("%d%d%d%d%s%s",&n,&k,&l,&r,x,y);
    memset(B,0,sizeof B);
    for(i=0;i<k;i++)
      B[y[i]]=1;
/*n=10000;
for(i=0;i<n;i++)
x[i]=rand()%26+'a';*/
    for(i=1;i<=n;i++)
      S[i]=S[i-1]+B[x[i-1]];
    for(s=0,j=k=i=1;i<=n;i++)
    {
      j=max(j,i);
      k=max(k,i);
      while(j<=n && S[j]-S[i-1]<l)
        j++;
      while(k<=n && S[k]-S[i-1]<=r)
        k++;
      if(j<=n)
        s+=k-j;
    }
/*int s2=0;
    for(i=1;i<=n;i++)
      for(j=i;j<=n;j++)
        if(S[j]-S[i-1]>=l && S[j]-S[i-1]<=r)
          s2++;
    assert(s==s2);*/
    printf("%d\n",s);
  }
  return 0;
}
