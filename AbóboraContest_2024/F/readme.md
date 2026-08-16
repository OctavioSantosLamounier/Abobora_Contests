# Problema F

A Tecelã mede a circunferência `C` do tubo, mas o que importa é se a fibra `X` (área) cobre a **seção transversal do círculo** (área do círculo). Basta converter circunferência em área:

```
r = C / (2π)
área = π * r²
```

E comparar: se `X >= área`, a fibra é suficiente.

## Algoritmo

1. Ler `X` e `C`.
2. Calcular o raio a partir da circunferência.
3. Calcular a área do círculo com esse raio.
4. Comparar `X` com a área calculada.

## Complexidade

- **Tempo:** `O(1)`.
- **Memória:** `O(1)`.
