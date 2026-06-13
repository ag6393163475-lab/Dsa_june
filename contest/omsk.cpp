#include <iostream>

using namespace std;

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;

    vector<long long> sa;
    long long curr_a = a;
    sa.push_back(curr_a);
    while (curr_a > 0) {
        curr_a /= x;
        sa.push_back(curr_a);
    }

    vector<long long> sb;
    long long curr_b = b;
    sb.push_back(curr_b);
    while (curr_b > 0) {
        curr_b /= x;
        sb.push_back(curr_b);
    }

    long long min_ops = 2e18;

    for (int i = 0; i < sa.size(); i++) {
        for (int j = 0; j < sb.size(); j++) {
            min_ops = min(min_ops ,i + j + abs(sa[i] - sb[j]));
        }
    }

    cout << min_ops << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--)solve();

    return 0;
}