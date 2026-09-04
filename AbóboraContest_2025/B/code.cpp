#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n;
    cin >> n;

    long long m,k;
    while (n--) {
        cin >> m >> k;

        int ans = m * k - 1;
 
        cout << ans << endl;
    }
    return 0;
}