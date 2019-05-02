//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int br_up; cin >> br_up;
    for (int i = 0; i < br_up; i++) {
        int n; cin >> n; int k; cin >> k;
        vector<string> niz = vector<string>(n);
        for (int j = 0; j < n; j++)
            cin >> niz[j];
        string res = string(k, 'a');
        char next;
        for (int j = 0; j < k; j++) {
            int min_sum = INT_MAX;
            for (char c = 'a'; c <= 'z'; c++) {
                int temp_sum = 0;
                for (int m = 0; m < n; m++) {
                    int diff = (int) c - niz[m][j];
                    if (diff < 0)
                        diff = 0 - diff;
                    temp_sum += diff;
                }
                if (temp_sum < min_sum) {
                    min_sum = temp_sum;
                    next = c;
                }
            }
            res[j] = next;
        }
        cout << res <<endl;
    }
    return 0;
}
