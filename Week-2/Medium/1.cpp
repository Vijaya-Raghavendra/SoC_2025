#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> teams(n);
    for (int i = 0; i < n; ++i)
        cin >> teams[i].first >> teams[i].second;
    sort(teams.begin(), teams.end(), [](pair<int,int>& a, pair<int,int>& b) {
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    pair<int, int> target = teams[k - 1];
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (teams[i] == target) count++;
    cout << count << '\n';
    return 0;
}
