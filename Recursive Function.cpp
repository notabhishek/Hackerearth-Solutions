//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
using namespace std;

 int f( int x, int y)
{
 if(x==0)
      return (y+1)%1000;
 else
  if(x>0 && y==0)
    return f(x-1,1)%1000;
  else
   if(x>0 && y>0)
    return f(x-1,f(x,y-1));
}
int main()
{
    int x,y;
    cin>>x>>y;
    int p=f(x,y);
    p=p%1000;

    if(p<10)
        cout<<"00"<<p<<endl;
    else
        if(p<100)
            cout<<"0"<<p<<endl;
        else
            cout<<p<<endl;

    return 0;
}
