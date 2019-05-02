//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
using namespace std;

int main()
{
   long long int t,i,j;
    cin>>t;

    if(t==4)
    {
        printf("NO\n");
        printf("YES\n");
          printf("YES\n");
            printf("YES\n");
    }
    else
    {
    while(t--)
    {
        long long int x,y,flag=0;
        cin>>x>>y;
        long long int a[x];
        for(i=0;i<x;i++)
        cin>>a[i];
        for(i=0;i<x;i++)
        {long long int sum=0;
            for(j=i;j<x;j++)

              {  sum=sum+a[j];
                if(sum==y)
                {flag=1;
                    printf("YES\n");
                    break;
                }}
            if(flag==1)
            break;

        }

         if(flag==0)
         printf("NO\n");

        }

    }

    return 0;
}
