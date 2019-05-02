//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
#include <string.h>
using namespace std;
char day[1500];
char sir[600000];
int main()
{
 int n, secv, x = 0, ok = 0;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> day;
  secv = 0;
  int l = strlen(day) - 1;
  for (int j = 0; j <= l; j++)
   if (day[j] == 'C')
   {
    secv++;
    if (secv > x) x = secv;
   }
   else secv = 0;
   strcat(sir, day);
 }
 cout << x;
 secv = 0;
 int y = 0;
 for (int i = 0; i < strlen(sir); i++)
  if (sir[i] == 'C')
  {
   secv++;
   if (y < secv) y = secv;
  }
  else secv = 0;
  cout << " " << y;
  return 0;
}
