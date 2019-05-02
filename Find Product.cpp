//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <iostream>
#include<math.h>

using namespace std;

int main() {
    int N,a[1000],i;
   long r=1,p;
    cin>>N;
    p=pow(10,9)+7;
    for(i=1;i<=N;++i)
    {
        cin>>a[i];
    r=fmod(r*a[i],p);
    }
	cout<<r; }

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fai
