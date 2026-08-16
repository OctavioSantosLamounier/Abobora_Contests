#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    bool a1 = a+b > c;
    bool a2 = b+c > a;
    bool a3 = a+c > b;
    
    cout << (a1 && a2 && a3 ? "SIM" : "NAO") << endl;
    return 0;
}