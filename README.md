*This project has been created as part of the 42 curriculum by vlourenc*

# 📝 Description

O objetivo deste projeto é recriar a função printf da biblioteca padrão de C (libc). A função deve replicar o comportamento de formatação de strings, lidando com diversos tipos de dados através de funções variádicas. O desafio central é gerir a contagem precisa de caracteres impressos enquanto se processa a string de formato em tempo real.

# 🛠️ Instructions

## Compilação

O projeto inclui um Makefile que segue as normas da 42 (flags -Wall -Wextra -Werror).
Bash

make        # Compila a biblioteca libftprintf.a

make clean  # Remove os ficheiros objeto

make fclean # Remove objetos e a biblioteca

make re     # Recompila tudo do zero

## Execução

Para usar o ft_printf no teu código:

    Compila o ficheiro com a biblioteca: cc main.c libftprintf.a

# 🧮 Algorithm & Data Structure

## O Algoritmo

O projeto utiliza um algoritmo de Single-Pass Parsing (análise de passagem única). A string de formato é percorrida caractere a caractere:

    Se o caractere atual não for %, ele é impresso e o contador é incrementado.

    Se um % for encontrado, a função "salta" para o caractere seguinte (o especificador) e utiliza uma função de despacho (check_format) para decidir qual sub-função chamar.

## Estrutura de Dados e Lógica

    Variadic Functions: Utilização da estrutura va_list para aceder a argumentos de tipos desconhecidos em tempo de compilação.

    Recursividade: Para a conversão de números (base 10 e 16), foi implementada uma lógica recursiva. Isto permite "desmontar" o número algarismo por algarismo e imprimi-los na ordem correta sem necessidade de buffers temporários ou malloc, mantendo a contagem de bytes através do retorno da stack de recursão.

    Tipagem: Utilização de unsigned long para o tratamento de ponteiros (%p), garantindo compatibilidade com sistemas de 64 bits.

# 📚 Resources

## Referências Clássicas

    Secrets of printf - Guia detalhado sobre o funcionamento interno.

    Man printf(3) - Documentação oficial do sistema.

    C Variadic Functions - Documentação da stdarg.h.

# Uso de IA

Neste projeto, a Inteligência Artificial foi utilizada como um "Peer Mentor" nas seguintes tarefas:

    Debug Assistido: Identificação de discrepâncias na contagem de caracteres entre o ft_printf e o printf original.

    Documentação: Auxílio na estruturação deste ficheiro README conforme os requisitos do subject.