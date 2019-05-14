//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
bool is_single(string s)
{
    int l=s.length();
    for(int i=1;i<l;++i)
    {
        if(s[i]!=s[0])
            return false;
    }
    return true;
}

bool is_palin(string s)
{
    int l=s.length();
    for(int i=0;i< (l/2)+1;++i)
    if(s[i]!=s[l-i-1])
    return false;
    return true;

}
int main()
{
    string s;
cin>>s;
if(is_palin(s))
{
    if(is_single(s))
        cout<<0;
    else
        cout<<s.length()-1;
}
else
    cout<<s.length();

    return 0;
}
