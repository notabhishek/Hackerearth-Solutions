//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker


// Sample code to perform I/O:

#include <stdio.h>
#include<string.h>



int main() {
char a[10000],b[10000];
int l1,l2,t,i,j,p;
scanf("%d",&t);
for(p=0;p<t;++p)
{
    scanf("%s%s",a,b);
int R,k,found=0;
l1=strlen(a);
l2=strlen(b);

if(l1>=l2)
{R=l2;
 for(i=0;i<l2;++i)
 {k=1;
     for(j=0;j<l1-found;++j)
     {
         if(b[i]==a[j])
         {char c;
             c=a[j];
             a[j]=a[l1-found-1];
             a[l1-found-1]=c;
             k=0;
            ++found;
         }
         if(k==0)
         break;

     }R=R-k;
 }
}


else
{R=l1;
 for(i=0;i<l1;++i)
 {k=1;
     for(j=0;j<l2-found;++j)
     {
         if(a[i]==b[j])
         {char c;
             c=b[j];
             b[j]=b[l2-found-1];
             b[l2-found-1]=c;
             k=0;
            ++found;
         }
         if(k==0)
         break;

     }R=R-k;
 }
}


printf("%d\n",l1+l2-2*R);
}
return 0;										// Reading inp	// Writing output to STDOUT
}

