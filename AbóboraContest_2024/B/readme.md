# Problema B

Jack precisa percorrer **cada trilha exatamente uma vez** (ela é destruída ao ser usada) e voltar ao ponto de partida. Isso é a definição clássica de **circuito euleriano**: um percurso que passa por toda aresta do grafo exatamente uma vez e retorna ao vértice inicial.

Um grafo (não-direcionado) possui circuito euleriano se, e somente se:

1. Todo vértice tem **grau par**; 
2. O grafo é **conexo** 

## Algoritmo

1. Monta-se a lista de adjacência do grafo.
2. Verifica-se o grau de cada vértice — se algum for ímpar, já falha.
3. Faz-se uma DFS a partir do primeiro vértice não visitado, marcando os alcançados. Se for necessário iniciar mais de uma DFS (ou seja, existe mais de uma componente), o grafo não é conexo e falha.
4. Se passar nas duas checagens, imprime `S`; caso contrário, `N`.

A quantidade de monstros `k` em cada trilha é lida mas não influencia o resultado — o problema só depende da estrutura do grafo.

## Complexidade

- **Tempo:** `O(N + M)` — grau é O(1) por vértice (grau já calculado via tamanho da lista de adjacência) e a DFS visita cada vértice/aresta uma vez.
- **Memória:** `O(N + M)` para a lista de adjacência.