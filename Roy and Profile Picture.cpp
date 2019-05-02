//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int N,L,H,W,i;
	cin>>L;
	cin>>N;
	for(i=0;i<N;++i)
	{
	    cin>>W>>H;
	    if(W<L || H<L)
	    cout<<"UPLOAD ANOTHER"<<endl;
	    else
	    {
	    if(W==H)
	    cout<<"ACCEPTED"<<endl;
	    else
	    cout<<"CROP IT"<<endl;
	    }
	}// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
