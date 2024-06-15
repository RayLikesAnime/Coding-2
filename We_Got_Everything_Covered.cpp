#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int tes;
    cin >> tes;
    for (int fuck = 1; fuck <= tes; fuck++) {
        int n, idx = -1, c = 0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<long long> b(n - 1);
        for (int i = 0; i < n - 1; i++) b[i] = gcd(a[i], a[i + 1]);
        for (int i = 0; i < n - 2; i++) {
            if (b[i] > b[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            cout << "Yes" << endl;
            continue;
        }
        vector<long long> a1(n - 1), a2(n - 1), a3(n - 1);
        vector<long long> b1(n - 2), b2(n - 2), b3(n - 2);
        c = 0;
        for (int i = 0; i < n; i++) if (i != idx + 1) a1[c++] = a[i]; 
        c = 0;
        for (int i = 0; i < n; i++) if (i != idx + 2) a2[c++] = a[i];
        c = 0;
        for (int i = 0; i < n; i++) if (i != idx) a3[c++] = a[i];
        for (int i = 0; i < n - 2; i++) b1[i] = gcd(a1[i], a1[i + 1]);
        for (int i = 0; i < n - 2; i++) b2[i] = gcd(a2[i], a2[i + 1]);
        for (int i = 0; i < n - 2; i++) b3[i] = gcd(a3[i], a3[i + 1]);
        bool flag1 = true, flag2 = true, flag3 = true;
        for (int i = 0; i < n - 3; i++) {
            if (b1[i] > b1[i + 1]) {
                flag1 = false;
                break;
            }
        }
        for (int i = 0; i < n - 3; i++) {
            if (b2[i] > b2[i + 1]) {
                flag2 = false;
                break;
            }
        }
        for (int i = 0; i < n - 3; i++) {
            if (b3[i] > b3[i + 1]) {
                flag3 = false;
                break;
            }
        }
        if (!flag1 && !flag2 && !flag3) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}