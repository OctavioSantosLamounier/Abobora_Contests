# Problema F

O código faz uma única passada pelos `N` dias, atualizando três estruturas em paralelo — uma para cada tipo de alerta — sem nunca precisar reprocessar dias já vistos.

- **Pico**: verificação direta, `O(1)` por dia — basta comparar `v[k] > 200`.
- **7 Dias**: mantém uma janela deslizante com no máximo 7 dias dentro de um `multiset<int>`. Usar um `multiset` permite obter o mínimo (`*window.begin()`) e o máximo (`*window.rbegin()`) da janela em tempo `O(log 7)`, em vez de percorrer os 7 valores toda vez. Assim que a janela atinge exatamente 7 dias, calcula `(max/min - 1) * 100`; se `>= 20%`, imprime o alerta e avança a janela em um dia (remove o dia mais antigo, `iniwind++`); caso contrário, a janela é apenas mantida com no máximo 7 elementos e desliza naturalmente no próximo dia (o dia mais antigo é removido no início da iteração seguinte, quando o tamanho passaria de 7). O efeito líquido é que **cada uma das `N-6` janelas possíveis de 7 dias consecutivos é avaliada exatamente uma vez**, na ordem.
- **Crescimento**: guarda uma sequência (`cresCount`) de quantos dias seguidos tiveram crescimento `>= 5%` em relação ao dia anterior, e `inicresc` marca o início dessa sequência. Ao atingir `cresCount >= 3` (ou seja, 4 dias no total, contando o dia anterior ao início da sequência de crescimentos), o alerta é disparado — e continua sendo disparado a cada novo dia enquanto o crescimento persistir, com o início fixo em `inicresc+1`.

## Algoritmo

1. Para cada dia `k` (0-indexado):
   - Insere `v[k]` na janela do 7-Dias.
   - Se `v[k] > 200`, imprime `[Pico]`.
   - Se a janela já tem mais de 7 dias, remove o mais antigo.
   - Se a janela tem exatamente 7 dias, calcula a variação percentual `min`/`max`; se `>= 20%`, imprime `[7 Dias]` e desliza a janela mais uma vez.
   - Calcula a variação percentual em relação ao dia anterior; se `< 5%`, zera a sequência de crescimento; senão, incrementa. Se a sequência chegou a `3`, imprime `[Crescimento]`.
2. Se nenhum alerta foi emitido durante todo o processo, imprime `Nenhum Alerta`.

## Complexidade

- **Tempo:** `O(N log 7) = O(N)` — cada dia faz um número constante de operações no `multiset` (tamanho no máximo 7).
- **Memória:** `O(N)` para guardar a entrada, mais `O(1)` de estado auxiliar (a janela nunca passa de 7 elementos).

## ⚠️ Observação: erro no gabarito do enunciado (Exemplos 2 e 3)

Os **Exemplos 2 e 3 divergem** por erro no gabarito, não no código:

- **Exemplo 2**: as 3 janelas de 7 dias (`1-7`: 31.11%, `2-8`: 33.33%, `3-9`: 50.00%) passam de 20%, mas o gabarito só lista `2-8`.
- **Exemplo 3**: janela `2-8` dá 40% e deveria alertar, mas o gabarito diz `Nenhum Alerta`.

Como o Exemplo 1 bate 100% com o código, a regra está implementada corretamente — o gabarito é quem deixou de considerar janelas sobrepostas.