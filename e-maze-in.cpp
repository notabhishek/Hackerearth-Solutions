//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>

using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string move;
pair <int,int> position(0,0);
cin>>move;
for(auto i=move.begin();i!=move.end();++i)
{
 switch(*i)
 {
     case 'L' : { --position.first; }break;
     case 'R' : { ++position.first; }break;
     case 'D' : { --position.second; }break;
     case 'U' : { ++position.second; }break;
 }
}
cout<<position.first<<" "<<position.second;

}
