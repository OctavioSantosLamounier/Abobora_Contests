#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    string str;
    getline(cin,str);
    int n;
    cin >> n;

    queue<string> qs;
    stringstream inter(str);
    string s;
    while (inter >> s) 
        qs.push(s);
    
    while (!qs.empty()) {
        for (int i=0; i<n; i++) {
            string str = qs.front();
            qs.pop();
            qs.push(str);
        }

        cout << qs.front() << ' ';
        qs.pop();
    }
    return 0;
}