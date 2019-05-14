//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<iostream>
using namespace std;
int isprime(int n){
int c=0;
for(int i=1;i<=n;i++){
if(n%i==0)c++;
}
if(c==2)return 1;
else return 0;
}
int main(){
int n;
cin>>n;
int a[n][n],c=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
int s;
if(i-1<0||i+1>=n||j-1<0||j+1>=n){
if(i-1<0){
if(j-1<0)s=a[i+1][j]+a[i][j+1];
else if(j+1>=n)s=a[i][j-1]+a[i+1][j];
else s=a[i][j-1]+a[i+1][j]+a[i][j+1];
}
else if(i+1>=n){
if(j-1<0)s=a[i-1][j]+a[i][j+1];
else if(j+1>=n)s=a[i-1][j]+a[i][j-1];
else s=a[i-1][j]+a[i][j-1]+a[i][j+1];
}
else{
if(j-1<0)s=a[i-1][j]+a[i+1][j]+a[i][j+1];
else if(j+1>=n)s=a[i-1][j]+a[i][j-1]+a[i+1][j];
}
}
else s=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
s=isprime(s);
if(s)c++;
else continue;
}
}
cout<<c;
}

