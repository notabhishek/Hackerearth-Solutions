
//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<iostream>
using namespace std;
int main()
{
char str[9];
cin>>str;
if((((str[0]-48) + (str[1]-48))%2!=0)||(((str[3]-48)+(str[4]-48))%2!=0)||(((str[4]-48)+(str[5]-48))%2!=0)||(((str[7]-48)+(str[8]-48))%2!=0) || (str[2]=='A')|| (str[2]=='E')|| (str[2]=='I')|| (str[2]=='O')||(str[2]=='U')|| (str[2]=='Y'))
cout<<"invalid";
else
cout<<"valid";
return 0;
}
