//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include <iostream>

using namespace std;

int main()
{
long long int N;

cin >> N;

long long int arr[N];
long long int sum[N + 1];
sum[0] = 0;

for(long long int i = 1; i <= N; i++) {
cin >> arr[i];
sum[i] = sum[i - 1] + arr[i];
}

long long int max = -1000000000;
long long int total;

for(long long int j = 1; j <= N; j++) {
if(j <= N - 2) {
long long int l = j;
long long int count = 2;

while(l <= N) {
if(l + count <= N) {
l = l + count;
count++;
} else {
break;
}
}

total = sum[l] - sum[j - 1];
if(max < total) {
max = total;
}

} else {
total = arr[j];

if(max < total) {
max = total;
}
}
}

cout << max << endl;

return 0;
}
