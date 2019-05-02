//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <bits/stdc++.h>
#define v(exprn) ((exprn) % base)
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll n, k;
	cin>>n>>k;
    ll base = 1000000007;
    ll nums[n];
    ll k2 = v(k * k);
    for(ll i = 0; i < n; i++){
        cin>>nums[i];
    }
    ll sum0 = 0, sum1 = 0, sum2 = 0;
    for(ll i = 0; i < k; i++){
        sum0 = v(sum0 + nums[i]);
        sum1 = v(sum1 + v((i + 1) * nums[i]));
        sum2 = v(sum2 + v(v((i + 1) * (i + 1)) * nums[i]));
    }
    printf("%lld%s", sum2, k == n ? "\n" : " ");
    for(ll i = 1; i <= n - k; i++){
        sum2 = v(sum2 - 2 * sum1 + sum0 + v(k2 * nums[i + k - 1]));
        sum1 = v(sum1 - sum0 + v(k * nums[i + k - 1]));
        sum0 = v(sum0 - nums[i - 1] + nums[i + k - 1]);
        if(sum0 < 0){
            sum0 += base;
        }
        if(sum1 < 0){
            sum1 += base;
        }
        if(sum2 < 0){
            sum2 += base;
        }
        printf("%lld%s", sum2, i == n - k ? "\n" : " ");
    }
    return 0;
}
