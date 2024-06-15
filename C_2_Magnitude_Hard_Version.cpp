#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
const int N = 1000005;
long long a[N], f1[N], f2[N], w1[N], w2[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // Reset arrays for current test case
        fill(w1, w1 + n + 1, 0);
        fill(w2, w2 + n + 1, 0);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++) {
            if(i==1){
                f1[1] = max(a[1], abs(a[1]));
        f2[1] = min(a[1], abs(a[1]));
        if (a[1] >= 0) {
            w1[1] = 2;
            w2[1] = 2;
        } else {
            w1[1] = 1;
            w2[1] = 1;
        }
            }
            long long candidates_f1[] = {
                f1[i - 1] + a[i],
                abs(f1[i - 1] + a[i]),
                f2[i - 1] + a[i],
                abs(f2[i - 1] + a[i])
            };
            long long candidates_f2[] = {
                f1[i - 1] + a[i],
                abs(f1[i - 1] + a[i]),
                f2[i - 1] + a[i],
                abs(f2[i - 1] + a[i])
            };

            f1[i] = *max_element(candidates_f1, candidates_f1 + 4);
            f2[i] = *min_element(candidates_f2, candidates_f2 + 4);

            if (f1[i] == f1[i - 1] + a[i])
                w1[i] = (w1[i] + w1[i - 1]) % MOD;
            if (f1[i] == abs(f1[i - 1] + a[i]))
                w1[i] = (w1[i] + w1[i - 1]) % MOD;
            if (f1[i - 1] != f2[i - 1]) {
                if (f1[i] == f2[i - 1] + a[i])
                    w1[i] = (w1[i] + w2[i - 1]) % MOD;
                if (f1[i] == abs(f2[i - 1] + a[i]))
                    w1[i] = (w1[i] + w2[i - 1]) % MOD;
            }

            if (f2[i] == f1[i - 1] + a[i])
                w2[i] = (w2[i] + w1[i - 1]) % MOD;
            if (f2[i] == abs(f1[i - 1] + a[i]))
                w2[i] = (w2[i] + w1[i - 1]) % MOD;
            if (f1[i - 1] != f2[i - 1]) {
                if (f2[i] == f2[i - 1] + a[i])
                    w2[i] = (w2[i] + w2[i - 1]) % MOD;
                if (f2[i] == abs(f2[i - 1] + a[i]))
                    w2[i] = (w2[i] + w2[i - 1]) % MOD;
            }
        }
        cout << w1[n] << endl;
    }
    return 0;
}
