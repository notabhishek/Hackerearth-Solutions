//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include <iostream>
#include<math.h>

using namespace std;

int main() {
int T,R,sol;
cin>>T;
for(int i=0;i<T;++i)
    {sol=0;
        cin>>R;//R=x+3y+4z
        for(int z=1;z<=R/4;++z)
        {
            for(int y=1;y<=R/3;++y)
            {
                int x;

                x=R-3*y-4*z;
              if(x>=1)
              ++sol;

            }
        }
        cout<<sol<<endl;
    }
}

