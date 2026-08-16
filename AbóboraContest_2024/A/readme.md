# Problema A 
**número perfeito** — um número cuja soma dos divisores próprios (menores que ele mesmo) é igual a ele próprio.

Exemplo: `6 = 1 + 2 + 3`.

## Algoritmo

Para cada abóbora `T`:

1. Soma-se `1` (todo número > 1 é divisível por 1) e percorre-se de `2` até `T/2`, somando os divisores encontrados.
2. Compara-se a soma com `T`: se forem iguais, é perfeita (`SIM`), senão `NAO`.

## Complexidade

- **Tempo:** `O(T/2)` por abóbora, no pior caso.
- **Memória:** `O(1)`.