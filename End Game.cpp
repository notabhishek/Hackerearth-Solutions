//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int cases,n,a,b,c,d,m,j,i,k;
    cin >> cases;
    while(cases--)
    {
     cin >> n >> a >> b >> c >> d >> m;
     j=n-a+m;
     i=n-c;
     k=abs(b-d);
     if(j>=i&&k<=j)
      cout << "Draw"<< endl;
     //else if(j==i && j>=k)
      //cout << "Draw"  << endl;
     else
      cout << "White Wins" << endl;
    }
    return 0;
}
