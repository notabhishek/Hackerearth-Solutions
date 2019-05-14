#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      char str[500];int i,j,c=0,k,p,q,o;
      cin>>str;
      int l=strlen(str);
      int arr[150];
      for(i=0;i<150;i++)
      arr[i]=0;
      for(i=65;i<123;i++);  //creating a array whose prime element's value is 1
      {
          c=0;
          for(j=1;j<=i;j++)
          {
              k=i%j;
              if(k==0)
              c++;
          }
          cout<<i<<" ";
          if(c==2)
          arr[i]=1;
      }
      cout<<"\n\n";
      for(int x=65;x<123;++x)
        cout<<" ** "<<arr[i];
      cout<<"\n\n\n";
      for(i=0;i<l;i++)
      {
          int g=str[i];o=g;
          if(arr[g]!=1)
          for(;;)
          {
              p=arr[--g];
              q=arr[++o];
              if(p==1 && q==1)
              {str[i]=g;break;}

              else if(p==1 && q!=1)
              {str[i]=g;break;}

              else
              {str[i]=o;break;}
          }

      }
      cout<<str<<endl;
  }
  return 0;
}
