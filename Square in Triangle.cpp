//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


#include <iostream>
using namespace std;
int main() {
	int T;
	long long H,B;
	cin>>T;
	for(int i=0;i<T;++i)
	{
	  cin>>H>>B;
	cout<<(B/H-1)*(B/H)/2<<endl;
	}
	}

