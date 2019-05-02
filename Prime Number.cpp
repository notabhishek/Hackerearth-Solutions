//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include <iostream>

using namespace std;

int main() {
	int num,i=2;
	cin >> num;
	while(i<=num)
	{ int j,k=0;

	    for(j=2;j<i;++j)
	    {
	    if((i%j)==0)
	    k=-1;
	    }
	    if(k==0)
	    cout<<i<<" "; ++i;
    	}

	return 0;
}
