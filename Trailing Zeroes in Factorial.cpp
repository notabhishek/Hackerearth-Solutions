//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
#include<vector>
using namespace std;

int zero(int n){
    int count=0;
    for(int i=5;n/i>=1;i=i*5){
        count=count+n/i;
    }
    return count;
}
int main() {
	int t,m;


	cin>>t;
	while(t--){
		cin>>m;
		vector <int> v;
		int n=1;
	    while(1){
	        if(zero(n)==m){
	            v.push_back(n);
	        }
	        n++;
	        if(zero(n)>m){
	            break;
	        }

	       //cout<<v.size()<<"\n";
	    }
	    cout<<v.size()<<"\n";
	    for(int i=0;i<v.size();i++){
	        cout<<v[i]<<" ";
	    }
	    if(v.size()!=0)
	    cout<<"\n";
	}

}
