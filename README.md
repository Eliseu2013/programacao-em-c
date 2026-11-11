# Programação em C — Exercícios da Faculdade

Exercícios de lógica de programação em C feitos no 1º período de Análise e Desenvolvimento de Sistemas (FAETERJ). O objetivo deste repositório é registrar minha evolução ao longo do curso.

<!-- PRINT: coloque aqui um print do terminal rodando um exercício -->
> 📸 _Espaço reservado para um print do programa rodando no terminal._

## Funcionalidades

| Arquivo | O que faz |
|---|---|
| `lista-01/ex01-multiplos.c` | Lê N e Y e mostra os múltiplos de Y menores que N |
| `lista-01/ex02-serie-1-a-50.c` | Exibe a série 1, 50, 2, 49, 3, 48 ... |
| `lista-01/ex03-investimento.c` | Calcula o saldo de um investimento com rendimento mensal |
| `lista-01/ex04-negativos-e-media.c` | Conta números negativos e calcula a média dos positivos |
| `lista-01/ex04-negativos-e-media-com-cast.c` | Mesma questão, testando conversão de tipo (`(float)`) |
| `lista-01/ex05-serie-alternada.c` | Exibe a série 1, -2, 3, -4, 5 ... |

## Tecnologias usadas

- Linguagem C
- GCC (compilador)

## Como rodar o projeto

1. Instale um compilador C. No Windows, uma opção é o [MinGW-w64](https://www.mingw-w64.org/). No Linux, rode `sudo apt install gcc`.
2. Baixe o repositório:
   ```bash
   git clone https://github.com/Eliseu2013/programacao-em-c.git
   cd programacao-em-c
   ```
3. Compile o exercício que quiser:
   ```bash
   gcc lista-01/ex01-multiplos.c -o ex01
   ```
4. Execute:
   ```bash
   ./ex01
   ```

## O que aprendi

- Estruturas de repetição (`for`) e de decisão (`if / else`)
- Leitura e escrita no terminal com `scanf` e `printf`
- Vetores (arrays) e contadores
- Conversão de tipos (`int` para `float`) em divisões

## Próximos passos

Os códigos estão como entreguei na época, para mostrar minha evolução. Melhorias que já identifiquei:

- `ex04`: a comparação `numeros > 0` deveria ser `numeros[i] > 0`, e o enunciado pede 300 números (o código lê 10).
- `ex03`: usar juros compostos com `pow()` em vez de multiplicar pelo número de anos.
- `ex02`: calcular e exibir também a soma dos elementos, como pede o enunciado.
- Trocar `void main()` por `int main()`, que é o padrão da linguagem.
- Adicionar as próximas listas de exercícios.

## Autor

**Eliseu Fernandes** — estudante de Análise e Desenvolvimento de Sistemas (FAETERJ)

- GitHub: [@Eliseu2013](https://github.com/Eliseu2013)
- Contato: _[e-mail profissional — a adicionar]_
