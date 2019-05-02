//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>
using namespace std;
int main()
{
int N, K;
cin >> N;
cin >> K;
long int s[N];
long int T[N];
for (int i = 0; i < N; i++)
{
cin >> s[i];
T[i] = 0;
}
int j_last = 0;
for (int i = 0; i < N; i++)
{
if (s[i] < 0)
{
continue;
}
else
{
for (int j = j_last; j < std::min(i + K + 1, N); j++)
{
if (s[j] > 0)
{
continue;
}
if ((s[i]+T[i]) > 0 && (s[j]+T[j]) < 0)
{
long int x = std::min(s[i]+T[i], -s[j]-T[j]);
T[i] = T[i] - x;
T[j] = T[j] + x;
}
j_last = j;
if ((s[i]+T[i]) <= 0)
{
break;
}
}
}
}
long int sum = 0;
for (int i = 0; i < N; i++)
{
sum = sum + std::abs(s[i] + T[i]);
}
std::cout << sum;

}

