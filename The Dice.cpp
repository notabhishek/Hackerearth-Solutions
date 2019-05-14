//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int cnt=0 ,len=s.length();
    if(s[len-1]=='6')
    {
        cout<<-1;
        return 0;
    }
    else
    {
        for(int i=0;i<len;++i)
            if(s[i]!='6')
            ++cnt;
        cout<<cnt;

    }


    return 0;
}
