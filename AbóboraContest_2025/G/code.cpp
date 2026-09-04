#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    map<string,char> mp;
    mp["000"] = '1'; mp["001"] = '0';
    mp["010"] = '0'; mp["011"] = '1';
    mp["100"] = '0'; mp["101"] = '0';
    mp["110"] = '0'; mp["111"] = '1';

    
    while (n--) {
        string s,sx ="";
        for (int i=0; i<str.size(); i++) {
            if (i == 0) 
                s = std::string() + str.back() + str[i] + str[i+1];
            else if (i == str.size()-2)
                s = std::string() + str[i] + str[i+1] + str[0];
            else if (i == str.size()-1)
                s = std::string() + str[i] + str[0] + str[1];
            else
                s = str.substr(i-1,3);

            sx += mp[s];
        }
        str = sx;
    }
    
    cout << str << endl;
    return 0;
}

/* 
os dois ultimos casos de teste da questão foi 
declarado que estavam errados
*/