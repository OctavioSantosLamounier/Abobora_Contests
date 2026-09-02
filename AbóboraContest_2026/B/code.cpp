#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n;
    cin >> n;

    string str;
    
    n&1 ?
        str = "NAO":
        str = "SIM";
                
    cout << str << endl;
    return 0;
}