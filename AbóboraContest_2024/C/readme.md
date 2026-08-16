# Problema C 

Como todas as quantidades de doces são distintas, dá pra achar a posição no ranking de cada criança sem comparar todo mundo com todo mundo: basta **ordenar uma cópia** dos valores e, para cada criança, descobrir em que posição da lista ordenada seu valor cai.

Numa lista ordenada em ordem **crescente**, quem tem o maior valor fica no último índice (`n-1`) e é o 1º colocado; quem tem o menor valor fica no índice `0` e é o `n`-ésimo colocado. Ou seja:

```
posição_no_ranking = n - índice_na_lista_ordenada
```

## Algoritmo

1. Lê o vetor `v` na ordem de entrada (criança `i` → `v[i]`).
2. Cria uma cópia `v_aux` e ordena em ordem crescente.
3. Para cada criança `i`, faz uma **busca binária** em `v_aux` pelo valor `v[i]` e calcula `n - índice`.

## Complexidade

- **Tempo:** `O(n log n)` — dominado pelo sort e busca binária onde cada busca custa `O(log n)`.
- **Memória:** `O(n)` para o vetor auxiliar.