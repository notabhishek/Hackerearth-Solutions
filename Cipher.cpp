//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int i,N,dummy;
    char s[100000];
    cin>>s>>N;
    for(i=0;i<strlen(s);++i)
    {
    if(s[i]>=65 && s[i]<=90)
    {
        dummy=s[i]+N;

        while(dummy>90)
        {dummy=dummy-26;
        }
        s[i]=dummy;
    }

        if(s[i]>=97 && s[i]<=122)
    {
        dummy=s[i]+N;
        while(dummy>122)
        {dummy=dummy-26;}
        s[i]=dummy;

    }
        if(s[i]>=48 && s[i]<=57)
    {
        dummy=s[i]+N;

        while(dummy>57)
        {dummy=dummy-10;
        }
    s[i]=dummy;
    }
}	cout<<s;
}
