//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,c,i2;
    cin >> n >> r >> c;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin >> arr[i][j];
    }
    while(r--){
        int tempr;
        cin >> tempr;
        int dnar;
        for(int i2=n-1;i2>=0;i2--){
            if(i2 == n-1)dnar = arr[tempr-1][i2];
            if(i2!=0)arr[tempr-1][i2] = arr[tempr-1][i2-1];
        }
        arr[tempr-1][0] = dnar;
    }
    while(c--){
        int tempc;
        cin >> tempc;
        int dnac;
        for(i2=n-1;i2>=0;i2--){
            if(i2 == n-1)dnac = arr[i2][tempc-1];
            if(i2!=0)arr[i2][tempc-1] = arr[i2-1][tempc-1];
        }
        arr[0][tempc-1] = dnac;
    }
    for(int i1=0;i1<n;i1++){
        for(int j1=0;j1<n;j1++)cout << arr[i1][j1] << " ";
        cout << endl;
    }
    return 0;
}
