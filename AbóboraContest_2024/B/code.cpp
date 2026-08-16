#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

struct Vertice{
    vector<int> adj;
    char cor = 'B';
};

void Dfs_Visita(vector<Vertice> &G, int s){
    G[s].cor = 'P';

    for(auto v : G[s].adj) {
        if(G[v].cor == 'B'){
            Dfs_Visita(G, v);
        }
    }
}

bool Dfs(vector<Vertice> &G){
    int j=0;

    for(int i=0; i<G.size(); i++){
        // verifica se o grau de cada vertice é par
        if(G[i].adj.size() & 1)
            return false;

        // verifica se o grafo e conexo
        if(G[i].cor == 'B'){
            Dfs_Visita(G,i);
            j++;
        }
        if(j > 1) 
            return false;
    }
    return true;
}

int main() {
    fastio;

    int n, m;
    cin >> n >> m;  
    
    vector<Vertice> G(n);
    while(m--){
        int u,v,w;
        cin >> u >> v >> w;
        u--;v--;

        G[u].adj.push_back(v);
        G[v].adj.push_back(u);
    }

    cout << (Dfs(G)? "S" : "N") << endl; 
    return 0;
}