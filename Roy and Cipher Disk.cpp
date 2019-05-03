//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
int t;
cin>>t;
string mssg;
int pos;
int c_dist;
int ac_dist;
 while(t--)
{   pos=0;
    cin>>mssg;
    for(string ::iterator i=mssg.begin();i!=mssg.end();++i)
    {
        c_dist=int(*i-'a')-pos;
        if(c_dist<0)
            c_dist+=26;
        ac_dist=26-c_dist;
        if(ac_dist<c_dist)
            cout<<-ac_dist<<" ";
        else
            cout<<c_dist<<" ";
            pos=int(*i-'a');
    }
    cout<<"\n";
}


return 0;
}
