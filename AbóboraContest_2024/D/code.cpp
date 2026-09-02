#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool SubSetSum (vector<int> v, int s) {
    vector<bool> dp(s+1, false);

    dp[0] = true;
    for (int e : v)
        for (int i=s; i>=e; --i) 
            dp[i] = dp[i] || dp[i-e];
        
    return dp[s];
}


int main(){
    int n, p;
    cin >> n >> p;

    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    
    cout << (SubSetSum(v,p) ? "SIM" : "NAO") << endl;
    return 0;
}