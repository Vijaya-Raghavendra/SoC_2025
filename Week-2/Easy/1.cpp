#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) cin >> cards[i];
    int l = 0, r = n - 1;
    int s = 0, d = 0;
    bool turn = true;
    while (l <= r) {
        int pick;
        if (cards[l] > cards[r]) pick = cards[l++];
        else pick = cards[r--];
        if (turn) s += pick;
        else d += pick;
        turn = !turn;
    }
    cout << s << " " << d << "\n";
    return 0;
}
