//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int main()
{
  long N,X,Y;
  cin>>N>>X;
  for(int i=0;i<N;++i)
  {
      cin>>Y;
      if(Y<X)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
  }


}
