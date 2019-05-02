//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<iostream>
#include<string>
using namespace std;

int main()
{
 int tc,normal_len,jhool_len,i,j;
 string normal;
 cin>>tc;
 while(tc--)
 {
  cin>>normal;
  normal_len=normal.length();
  jhool_len=0;
  for(i=4;i<normal_len-4;i++)
  {
    if(normal[i]=='a'|| normal[i]=='e' || normal[i]=='i'|| normal[i]=='o' || normal[i]=='u')
      continue;
    jhool_len++;
  }
  jhool_len=jhool_len+4;

  cout<<jhool_len<<"/"<<normal_len<<endl;
 }
 return 0;
}
