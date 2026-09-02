#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

struct Vertice {
    vector<int> adj;
    char cor = 'b';
};

void DFS (vector<Vertice> &g, int s) {
    g[s].cor = 'c';

    for (int v: g[s].adj)
        if(g[v].cor == 'b')
            DFS(g,v);

    g[s].cor = 'p';
}

int main() {
    fastio;

    int n,m;
    cin >> n >> m;

    vector<Vertice> g(n);
    for (int u,v,i=0; i<m; i++) {
        cin >> u >> v;

        u--; v--;
        g[u].adj.push_back(v);
        g[v].adj.push_back(u);
    }

    int count=0;
    for (int i=0; i<n; i++) 
        if (g[i].cor == 'b') {
            DFS(g,i);
            count++;
        }

    cout << count << endl;
    return 0;
}