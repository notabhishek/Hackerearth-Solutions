//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;

    int T;
    cin>>T;
    for(int i=0;i<T;++i)
    {
        cin>>s1>>s2;
    if(s1.length()==s2.length())
        {int s[26]={0};
        for(int j=0;j<s1.length();++j)
        {
            ++s[s1[j]-'a'];
            --s[s2[j]-'a'];
        }
        int k;
         for( k=0;k<26;++k)
            if(s[k]!=0)
           break;
            if(k==26)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;

    }


}
