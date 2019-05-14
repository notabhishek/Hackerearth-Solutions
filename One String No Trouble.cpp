//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int max_len=1,len=1;
    for(int i=1;i<s.length();++i)
    {
        if(s[i]!=s[i-1])
        {
            ++len;
        }
        else
        {
            max_len=max(len,max_len);
            len=1;
        }
    }
    max_len=max(len,max_len);
    cout<<max_len;
    return 0;
}

