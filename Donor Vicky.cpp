//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>

using namespace std;

int main() {
    int T,N,X,count;
    cin>>T;
for(int i=0;i<T;i++)
    {
        count=0;
    cin>>N>>X;
    while(X>0)
        {
           ++count;
           X-=count;
        }
        if(count%N==0)
        cout<<N<<endl;
        else
        cout<<count%N<<endl;
    }
}

