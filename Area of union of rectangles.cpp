//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
bitset<1000> cartesian_coordinates[1000];
int x1,x2,y1,y2;
cin>>n;
while(n--)
{
    cin>>x1>>y1>>x2>>y2;

    for(int x=x1;x<x2;++x)
        for(int y=y1;y<y2;++y)
        cartesian_coordinates[x][y]=1;
}
int area=0;

        for(int x=0;x<1000;++x)
            for(int y=0;y<1000;++y)
                if(cartesian_coordinates[x][y]==1)
                {
                    ++area;
                }
cout<<area;

    return 0;
}
