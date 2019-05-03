//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include<bits/stdc++.h>
using namespace std;
bool check_leap(int year)
{
    if(year%100==0)
    {
        if(year%400==0)
        return true;
        else
        return false;
    }
    else
    {
        if(year%4==0)
            return true;
        else
            return false;
    }
}
void date(int day,char month[],int year)
{
if(day==1)
{
    if(!strcmp(month,"January"))
    {
    cout<<"31 December "<<year-1<<"\n";
    return ;
    }
    else
    {
        if(!strcmp(month,"February"))
        {
            cout<<"31 January "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"March"))
        {
            if(check_leap(year))
            cout<<"29 February "<<year<<"\n";
            else
            cout<<"28 February "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"April"))
        {

            cout<<"31 March "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"May"))
        {
            cout<<"30 April "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"June"))
        {
            cout<<"31 May "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"July"))
        {
            cout<<"30 June "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"August"))
        {
            cout<<"31 July "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"September"))
        {
            cout<<"31 August "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"October"))
        {
            cout<<"30 September "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"November"))
        {
            cout<<"31 October "<<year<<"\n";
            return;
        }
        if(!strcmp(month,"December"))
        {
            cout<<"30 November "<<year<<"\n";
            return;
        }

    }
}
else
{
    cout<<day-1<<" "<<month<<" "<<year<<"\n";
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;

cin>>t;
int day;
int year;
char month[10];
while(t--)
{
cin>>day;
cin>>month;
cin>>year;
date(day,month,year);
}
return 0;
}
