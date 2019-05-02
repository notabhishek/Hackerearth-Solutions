//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int i,k=0;
	long isbn;
	cin>>isbn;
	if(isbn<=999999999 && isbn>=10000000000)
	cout<<"Illegal ISBN";
	else
	{
	for(i=10;0<i;--i)
	{
	    k+=(isbn%10)*i;
	    isbn=(isbn-isbn%10)/10;

	}
	if(k%11==0)
	cout<<"Legal ISBN";
	else
	cout<<"Illegal ISBN";

}}

// Write your code here
