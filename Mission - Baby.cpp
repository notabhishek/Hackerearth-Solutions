//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
#define pb(a) push_back(a)
#define pf(a) push_front(a)
#define mp(a,b) make_pair(a,b)
typedef long long int lli ;
typedef long long ll;
using namespace std;
int res[40000];
int res_size = 1;
ll digitsum(ll n)
{
	if(n<10)
	return n;
	return n%10+digitsum(n/10);
}

int multiply(int x,int res_size)
{
    int carry = 0;  // Initialize carry


    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
  		res[i] = prod % 10;
  		carry  = prod/10;
    }
  	while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{


    // Initialize result
    res[0] = 1;

    for (int x=2; x<=n; x++)
        res_size = multiply(x,res_size);
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
long z;
cin>>n>>z;
ll sum=0;
factorial(n);
for(int i=0;i<res_size;++i)
sum+=res[i];

while(sum>9)
{
	sum=digitsum(sum);
}
cout<<res_size+sum;
return 0;
}
