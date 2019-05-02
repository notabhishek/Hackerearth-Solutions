//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include <iostream>
#include <cstdlib>
using namespace std;
unsigned long long int sumdigit(unsigned long long int num)
{
    unsigned long long int r,sum=0;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    if(sum<10)
        return sum;
    else
        return sumdigit(sum);
}
int main()
{
    unsigned long long T,M,len,d,i,j,k,sum=0,x,y;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>M;
        sum = 0;
        for(j=0;j<M;j++)
        {
            cin>>len>>d;
            sum = sum + len*d;
            if(sum>9)
            {
                x=sum;
                sum=0;
                while(x!=0)
                {
                    y=x%10;
                    sum = sum + y;
                    x=x/10;
                }
            }
        }
        if(sum>9)
            cout<<sumdigit(sum)<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
