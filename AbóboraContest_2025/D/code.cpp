#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    while (n--) {
        int count=0;
        string straux = str;
        
        string str1;
        cin >> str1;

        for (int i=0; i<str1.size(); i++) {
            for (int j=0; j<straux.size(); j++) 
                if (str1[i] == straux[j]) {
                    straux[j] = '0';
                    count++;
                    break;
                }
        }
        
        cout << (count == str1.size() ? "SIM" : "NAO") << endl;
    }
    return 0;
}