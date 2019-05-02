//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
int red[10001000],green[10001000],blue[10001000];

int main() {
int t,r,g,b;
cin>>t>>r>>g>>b;
int res[8]={0,0,0,0,0,0,0,0};
 int i,count;
for(i=0;i<t;i++) {
red[i]=0;
green[i]=0;
blue[i]=0;
}
//Red
for(i=r;i<t;i=i+2*r)  {
count=0;
while(count<r) {
red[i+count]=1;
count++;
}
}

//Blue
for(i=b;i<t;i=i+2*b)  {
count=0;
while(count<b) {
blue[i+count]=1;
count++;
}
}

//Green
for(i=g;i<t;i=i+2*g)  {
count=0;
while(count<g) {
green[i+count]=1;
count++;
}
}


for(i=0;i<t;i++) {
if(red[i]==1&&green[i]==0&&blue[i]==0) {
res[0]++;
}
else if(red[i]==0&&green[i]==1&&blue[i]==0) {
res[1]++;
}
else if(red[i]==0&&green[i]==0&&blue[i]==1) {
res[2]++;
}
else if(red[i]==1&&green[i]==1&&blue[i]==0) {
res[3]++;
}
else if(red[i]==0&&green[i]==1&&blue[i]==1) {
res[4]++;
}
else if(red[i]==1&&green[i]==0&&blue[i]==1) {
res[5]++;
}
else if(red[i]==1&&green[i]==1&&blue[i]==1) {
res[6]++;
}
else if(red[i]==0&&green[i]==0&&blue[i]==0) {
res[7]++;
}
}
for(i=0;i<8;i++) {
cout<<res[i]<<" ";
}
return 0;
}
