# Problema A

Athos só pode andar para frente, visitando barracas consecutivas, sem pular nenhuma e sem voltar. Ele quer saber o maior número de barracas que consegue visitar sem estourar o tempo T.

Como todo A_i é positivo, a soma dos tempos de um trecho de barracas só cresce conforme se anda para frente. Isso permite usar dois ponteiros (janela deslizante): um marca o início do trecho atual e outro o fim. O ponteiro do fim sempre avança; o do início só avança quando a soma do trecho ultrapassa T.

## Algoritmo

1. Ler N, T e o vetor V com N inteiros.
2. Manter dois ponteiros, `i` (início) e `j` (fim), representando a janela de barracas consecutivas atual, e uma soma acumulada dos tempos dentro dela.
3. Para cada `j` de 0 a N-1: somar `A[j]` à janela e incrementar a contagem de barracas.
4. Enquanto a soma ultrapassar T, remover `A[i]` da soma, decrementar a contagem e avançar `i`.
## Complexidade

* Tempo: `O(n)`, já que `i` e `j` andam para frente no máximo n vezes cada, sem retroceder.
* Memória: `O(n)`, para armazenar o vetor de tempos.