#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// returna o indice
int buscaBinaria (vector<int> v, int n, int b) {
    int menor = 0;
    int maior = n-1;
  
    while(menor <= maior){
        int meio = (menor+maior)/2;

        int chute = v[meio];
        if (chute > b)
            maior = meio - 1;
        else if(chute < b)
            menor = meio + 1;
        else 
            return meio;
    }

    return -1e9;
}


int main() {
    fastio;

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    
    vector<int> v_aux(n);
    v_aux = v;
    
    sort(v_aux.begin(),v_aux.end());
  
    for(int i=0; i<n; i++)
        cout << n - buscaBinaria(v_aux,n,v[i]) << ' ';
    
    return 0;
}   
