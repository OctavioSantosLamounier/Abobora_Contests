# Problema A 

Seu Zé só pode se mover para a direita ou para baixo, sempre começando em (1,1) e terminando em (N,M). Isso significa que qualquer célula só pode ser alcançada vindo de cima ou da esquerda.

Dá pra resolver isso com programação dinâmica: Cada célula, guardar o maior total de abóboras possível para chegar até ali. Como só existem dois jeitos de chegar numa célula, basta pegar o melhor dos dois caminhos anteriores e somar o valor da célula atual. A primeira linha e a primeira coluna são casos especiais, porque só têm um caminho possível.

No fim, a resposta é o valor acumulado na célula final (N,M), que representa o melhor caminho possível até ali.

## Algoritmo

1. Ler N, M e a matriz G com a quantidade de abóboras em cada posição.
2. Criar uma matriz `dp` do mesmo tamanho, começando com os valores da matriz original.
3. Preencher a primeira coluna e a primeira linha de `dp` acumulando os valores.
4. Para cada célula restante (i,j), calcular `dp[i][j] = G[i][j] + max(dp[i-1][j], dp[i][j-1])`.

## Complexidade

* Tempo: `O(n·m)`, cada célula da grade é visitada uma única vez.
* Memória: `O(n·m)` para a matriz `dp`.