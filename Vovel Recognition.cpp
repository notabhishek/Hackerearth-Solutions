//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    string a;
    cin>>T;
    for(long i=0;i<T;++i)
    {
        cin>>a;
     long s=0,L=a.length();
        for(int j=0;j<L;++j)
        {
            if(a[j]=='a' ||a[j]=='e' ||a[j]=='i' ||a[j]=='o' ||a[j]=='u' ||a[j]=='A' ||a[j]=='E' ||a[j]=='I' ||a[j]=='O' ||a[j]=='U')
                 s+=(L-j)*(j+1);

        } cout<<s<<"\n";
    }
}
