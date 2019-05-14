//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github : https://github.com/becomeahacker


#include <bits/stdc++.h>
#define nn struct node
using namespace std;
struct node{
int val;
nn *next;
};

int main() {
int n,k,g;
cin>>n>>k>>g;
int dead = 0;
nn *head= NULL, *last = NULL;
for(int i = 0; i<n; i++){
nn* temp = (nn*)malloc(sizeof(nn));
temp->val = i+1;
if(!head){
head = temp;
last = temp;
}
else{
last->next = temp;
last = temp;
}
}
last->next = head;
nn *gun = head;
while(gun->val != g){
gun = gun->next;
}
while(1){
int to_kill = (gun->val)%k;
while(to_kill && dead<n-1){
nn* t ;
t = gun->next;
gun->next = gun->next->next;
free(t);
dead++; --to_kill;
}
if(dead == n-1) break;
gun = gun->next;
}
cout<<gun->val<<endl;

}
