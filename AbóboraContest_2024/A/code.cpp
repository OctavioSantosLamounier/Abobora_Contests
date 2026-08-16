#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n;
    cin >> n;
    while (n--) {
        int k; 
        cin >> k;

        int sum=1;
        for(int i=2; i<=k/2; i++)
            if(k%i == 0)    
                sum += i;
        
        cout << (sum == k ? "SIM" : "NAO") << endl;
    }
    return 0;
}