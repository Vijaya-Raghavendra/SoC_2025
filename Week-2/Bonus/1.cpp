#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        vector<int> sumA(n + 1), sumB(n + 1);
        for (int i = 0; i < n; ++i) {
            sumA[i + 1] = sumA[i] + a[i];
            sumB[i + 1] = sumB[i] + b[i];
        }

        int add = 0;
        while (true) {
            int total = n + add;
            int remove = total / 4;
            int takeA = total - remove;
            int takeB = min(n, takeA);
            int scoreA = add * 100;
            if (takeA - add > 0)
                scoreA += sumA[takeA - add];
            int scoreB = sumB[takeB];
            if (scoreA >= scoreB) break;
            add++;
        }
        cout << add << '\n';
    }
    return 0;
}
