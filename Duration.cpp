//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>

using namespace std;
int main()
{



    int N;
    int sh,sm,eh,em;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        cin>>sh>>sm>>eh>>em;
      if(em-sm<0)
      cout<<eh-sh-1<<" "<<em-sm+60<<endl;
      else
      cout<<eh-sh<<" "<<em-sm<<endl;
    }

}
