#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    fastio;

    int n,t;
    cin >> n >> t;
    
    vector<int> v(n);
    for (int &i: v)
        cin >> i;
    
    int sum=0;
    int maxi=0;    
    int count=0;
    for (int i=0,j=0; j<n; j++) { 
        sum += v[j];
        count++;
        
        while (sum > t) {
            sum -= v[i];
            count--; i++;
        }

        maxi = max(maxi,count);
    }

    cout << maxi << endl;
    return 0;
}

/* 
5 7
4 1 2 3 5 

6 4 
1 6 1 1 1 1
*/