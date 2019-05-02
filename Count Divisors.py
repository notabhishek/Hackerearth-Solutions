//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int l,r,k,i,c=0;
	cin>>l>>r>>k;
	for(i=l;i<=r;++i)
	if((i%k)==0)
	++c;
	cout<<c;// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
