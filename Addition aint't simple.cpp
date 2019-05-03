//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
char str[100000];
while(n--)
{
cin>>str;
long i,l=strlen(str);
for(int i=0;i<l;++i)
{
    int c=int(str[i]a)-192+int(str[l-i-1]);
    c=c%26;
    if(c==0)
    c=26;
    cout<<char(c+96);
}
cout<<"\n";

}



return 0;
}

