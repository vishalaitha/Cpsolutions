#include <bits/stdc++.h>
using namespace std;

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        unordered_map<int, int> m;
        
        bool flag = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (!m.count(x))
                m[x] = i;

            flag = flag || (i - m[x] > 1);
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}