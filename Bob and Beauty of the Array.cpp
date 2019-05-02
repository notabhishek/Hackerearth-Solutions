//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
using namespace std;

#define MOD9 1000000007

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned long a, i, j, k, l, n, beauty, counter[2][1001] = {0};
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a;
		counter[0][a]++;
		if (counter[1][a] == 0) {
			counter[1][a] = 2;
		} else {
			counter[1][a] = (2 * counter[1][a]) % MOD9;
		}
	}

	for (j = 1; j <= 1000; j++) {
    if (counter[0][j] == 0) continue;
		beauty = (beauty + (((counter[1][j] - counter[0][j] - 1) * j) % MOD9)) % MOD9;
		l = 1;
		for (k = j + 1; k <= 1000; k++) {
      if (counter[0][k] == 0) continue;
      beauty = (beauty + (((counter[1][k] - 1) * (((((counter[1][j] - 1) * (k | j)) % MOD9) * l) % MOD9)) % MOD9)) % MOD9;
			l = (l * counter[1][k]) % MOD9;
		}
	}

	cout << beauty;
  return 0;
}
