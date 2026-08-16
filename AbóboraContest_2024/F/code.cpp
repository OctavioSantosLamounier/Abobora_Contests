#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    double X,C;
    cin >> X >> C;

    //obtem raio
    C = C/(2*M_PI); 
    //obtem area
    C = M_PI*C*C;

    cout << (X >= C ? "SIM" : "NAO")<< endl;
    return 0;
}