//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<stdio.h>


int main()
{

int t;
scanf("%d",&t);
int n;
while(t--)
{
scanf("%d",&n);
for(int i=0;i<n;++i)
{
for(int j=n-i;1<j;--j)
    printf(" ");
for(int k=2*i+1;0<k;--k)
    printf("*");
printf("\n");
}

}



return 0;
}
