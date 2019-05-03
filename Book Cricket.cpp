//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
int P;
int n;
cin>>t;
for(int T=0;T<t;++T)
{
    cin>>n>>P;
cout<<"Case "<<T+1<<":\n";
long score[P+1]={0};
int striker=1;
int non_striker=2;
int next=3;

char ch;
while(n--)
{
   for(int b=0;b<6;++b)
   {
       cin>>ch;
       switch(ch)
       {
           case '0' : break;
           case '1' : {
                        ++score[striker];
                        int temp=striker;
                        striker=non_striker;
                        non_striker=temp;
                        }break;
            case '2' : score[striker]+=2; break;
            case '4' : score[striker]+=4; break;
            case '6' : score[striker]+=6; break;
            case 'W' : {
                        striker=next;
                        ++next;
                        }break;
        }
   }
   int temp=non_striker;
   non_striker=striker;
   striker=temp;
}
for(int p=1;p<next;++p)
{
    if(p==striker || p==non_striker)
        cout<<"Player "<<p<<": "<<score[p]<<"*\n";
    else
        cout<<"Player "<<p<<": "<<score[p]<<"\n";
}
for(int p=next;p<=P;++p)
    cout<<"Player "<<p<<": DNB\n";

}


return 0;
}
