/*https://www.codechef.com/problems/DEVUGRAP*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        long long c = 0;
        long long m = pow(10, 9) + 7;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            long long r = x / k;
            long long p = x - k * r;
            long long q = k * (r + 1) - x;

            if (r == 0) {
                c += q % m;
            } else {
                c += min(p, q) % m;
            }
        }

        cout << c << endl;
    }

    return 0;
}