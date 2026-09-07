#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int solve (vector<vector<int>> g, int n, int m) {
    vector<vector<int>> dp = g;

    int dist=0;
    for (int i=1; i<n; i++) 
        dp[i][0] = dp[i-1][0] + dp[i][0];
    for (int i=1; i<m; i++) 
        dp[0][i] = dp[0][i-1] + dp[0][i];
    
    for (int i=1; i<n; i++) 
        for (int j=1; j<m; j++) 
            dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + dp[i][j];

    return dp[n-1][m-1];
}


int main() {
    fastio;

    int n,m;
    cin >> n >> m;

    vector<vector<int>> g(n,vector<int> (m));
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++) 
            cin >> g[i][j];
        
    int ans = solve(g,n,m);

    cout << ans << endl;
    return 0;
}

/* 
3 4
5 2 3 1
1 8 1 1
4 2 1 10
*/