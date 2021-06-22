#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
int main() {
    FIO;
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        unsigned long long ans = 0;
        map<long long, long long> m;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            m[temp - i]++;
        }
        for (auto iter = m.begin(); iter != m.end(); iter++) {
            ans += ((*iter).second * ((*iter).second - 1)) >> 1;
        }
        cout << ans << endl;
    }
}