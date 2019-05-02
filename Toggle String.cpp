//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>
#include<string.h>

using namespace std;

int main() {
	char a[100];
	cin>>a;
	int i,l;
	l=strlen(a);
	for(i=0;i<l;++i)
	{
	    if(a[i]>=65 && a[i]<=90)
	    a[i]+=32;
	    else
	    if(a[i]>=97 && a[i]<=122)
	    a[i]-=32;
	}// Reading input from	// Writing output to STDOUT

    cout<<a;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
