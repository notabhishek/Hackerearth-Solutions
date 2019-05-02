
//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include <iostream>
using namespace std;

int main()
{
    string s;
    int x=0,y=0,i=0;
    cin >> s;
    while(i<s.length())
    {
     if(s[i]=='L')
      x=x-1;
     else if(s[i]=='R')
      x=x+1;
     else if(s[i]=='U')
      y=y+1;
     else
      y=y-1;
     i++;
    }
    cout << x << " " << y << endl;
    return 0;
}
