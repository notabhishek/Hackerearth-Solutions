//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
bool CheckPalindrome(int i)
{
    int tmp=i,cpy=0;
    while(tmp != 0)
    {
        cpy=cpy*10+tmp%10;
        tmp/=10;
    }
    return (cpy==i)? true: false;
    //if(cpy==i)
    //    return true;
    //else
     //   return false;
}
int main()
{
    int t,i,a,b,count;
    cin>>t;

    while(t--)
    {
        count=0;
        cin>>a>>b;
        for(i=a; i<=b; i++)
        {
            if(CheckPalindrome(i)==true)
                count++;
        }
        cout<<count<<endl;

    }
}
