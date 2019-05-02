//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int s=0;

    for(auto i=S.begin();i!=S.end();++i)
    {
      s+=(int)(*i-96);
    }
    cout<<s;
}
