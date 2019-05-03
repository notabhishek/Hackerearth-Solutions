//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char x[18];
int k;

cin>>x;
cin>>k;
for(int i=0;x[i]!='\0';++i)
{
    if(x[i]!='9')
    {
        if(k>0)
        {
            x[i]='9';
            --k;
        }

    }
    cout<<x[i];

}

return 0;
}
