//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker



#include <iostream>

using namespace std;

int main() {
	long int d,x,r,tofee=0;
	int i;
	cin>>d;
	for(i=0;i<d;++i)
	{cin>>r>>x;
	   if((100*x)>=(2*22*r/7))
	   ++tofee;
    }
    cout<<tofee;
	}




