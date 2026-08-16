# Problema G

Três palitinhos formam um triângulo se, e somente se, satisfizerem a **Desigualdade Triangular**: a soma de quaisquer dois lados deve ser maior que o terceiro. Basta checar as três combinações.

## Algoritmo

Para os palitinhos `a`, `b`, `c`, verifica-se:

```
a + b > c
b + c > a
a + c > b
```

Se as três forem verdadeiras, forma triângulo (`SIM`); caso contrário, `NAO`.

## Complexidade

- **Tempo:** `O(1)`.
- **Memória:** `O(1)`.