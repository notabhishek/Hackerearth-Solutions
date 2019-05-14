//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>

using namespace std;

bool isVovel(char c)
{
    switch(c)
    {
        case 'a' :{}
        case 'e' :{}
        case 'i' :{}
        case 'o' :{}
        case 'u' :{}
        case 'A' :{}
        case 'E' :{}
        case 'I' :{}
        case 'O' :{}
        case 'U' :{ return true;}
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
          {
                string s;
                cin>>s;
                long ans=0,c=0;
                int l=s.length();
                for(int i=l-1;i>-1;--i)
                {


                   if(isVovel(s[i]))
                   {
                      c+= l-i;
                   }
                   ans+= c;
                }
                cout<<ans<<"\n";

          }
    return 0;
}
