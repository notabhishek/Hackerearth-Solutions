//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
using namespace std;

int consistent(int cr[], int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    for(int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + cr[i];
        if(max_ending_here < 0)
        {
            max_ending_here = 0;
        }
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}


int main()
{
    int n;
    cin>>n;
    int cr[n];
    for(int i=0;i<n;i++)
    {
        cin>>cr[i];
    }
    int rating = consistent(cr,n);

    cout<<rating;
    return 0;
}
