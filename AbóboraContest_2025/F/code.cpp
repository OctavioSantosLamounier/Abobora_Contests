#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &e : v) 
        cin >> e;

    multiset<int> window;  
    int iniwind = 0;          
    int inicresc = 0;    
    int cresCount = 0;        
    bool alteracao = false;

    for (int k=0; k < n; k++) {
        window.insert(v[k]);

        // Pico
        if (v[k] > 200) { 
            printf("[Pico] %d: %d insetos\n", k+1, v[k]);
            alteracao = true;
        }   


        // 7 dias 
        // mantem a janela com no maximo 7 dias
        if (k - iniwind >= 7) {
            window.erase(window.find(v[iniwind]));
            iniwind++;
        }

        if (k - iniwind + 1 == 7) {
            double lo = *window.begin();
            double hi = *window.rbegin();
            double dif = (hi * 100.0 / lo) - 100.0;

            if (dif >= 20.0) {
                printf("[7 Dias] %d-%d: %.2f%%\n", iniwind+1, k+1, dif);
                window.erase(window.find(v[iniwind]));
                alteracao = true;
                iniwind++;
            }
        }

        // crescimento
        double dif = (k != 0) ? (double)v[k] * 100.0 / v[k-1] - 100.0 : -1.0;

        if (dif < 5.0) {
            cresCount = 0;
            inicresc = k;
        }
        else { 
            cresCount++;
        }

        if (cresCount >= 3) {
            printf("[Crescimento] %d-%d: maior que >= 5%%\n", inicresc+1, k+1);
            alteracao = true;
        }
    }
    if (!alteracao) 
        cout << "Nenhum Alerta" << endl;

    return 0;
}

/* 
10
50 60 70 80 90 200 210 220 180 170

9 
100 105 112 118 90 96 100 120 80

8
118 120 118 140 140 140 130 100
*/