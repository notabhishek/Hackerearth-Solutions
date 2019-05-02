//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;

    return n%10+sum(n/10);
}

void seive(long a,long b)
{

   bool prime[b+1];
   memset(prime,true,sizeof(prime));

    for (int p=2; p*p<=b; p++)
    {
     for (int i=p*p; i<=b; i += p)
        prime[i] = false;
    }

    for(int p=a;p<=b;++p)
    {
        if(prime[p])
        {
            if(prime[sum(p)])
            {
                cout<<p<<" ";
            }
        }
    }
}
int main()
{

    long a,b;
    cin>>a>>b;
    seive(a,b);



    return 0;

}

