//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
long long k;
long long D[7];
long long sum;
cin>>t;
while(t--)
{
    cin>>k;
    sum=0;
    for(int i=0;i<7;++i)
    {
        cin>>D[i];
        sum+=D[i];
    }
    int flag=-1;
    if(k>sum)
    k=k%sum;
    if(k==0)
    k+=sum;
    sum=0;
    for(int i=0;i<7;++i)
    {
        sum+=D[i];
        if(!(sum<k))
        {
            flag=i;
            i=7;
        }
    }
    switch(flag)
    {
        case 0 :cout<<"MONDAY\n"; break;
        case 1 :cout<<"TUESDAY\n"; break;
        case 2 :cout<<"WEDNESDAY\n"; break;
        case 3 :cout<<"THURSDAY\n"; break;
        case 4 :cout<<"FRIDAY\n"; break;
        case 5 :cout<<"SATURDAY\n"; break;
        default :cout<<"SUNDAY\n"; break;

    }
}



return 0;
}
