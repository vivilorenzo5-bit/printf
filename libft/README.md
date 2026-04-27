*This project has been created as part of the 42 curriculum by vlourenc*

## 📝 Description
O projeto **Libft** consiste na criação de uma biblioteca individual em C que reúne reimplementações de funções padrão da `libc`, além de funções adicionais para manipulação de strings, memória e listas ligadas. O objetivo principal é entender o funcionamento interno destas ferramentas e criar uma base sólida de utilitários para futuros projetos na 42.

## 🛠️ Instructions

### Compilation
O projeto utiliza um `Makefile` com as flags obrigatórias `-Wall -Wextra -Werror`.

- Para compilar a biblioteca base:
  ```bash
  make

  make all: Compila os ficheiros fonte e gera a libft.a.

  make clean: Remove os ficheiros objeto (.o).
  
  make fclean: Remove os objetos e a biblioteca compilada.

  make re: Executa fclean e all consecutivamente.

## Resources

### Resources

    Man pages de sistemas Unix/Linux.

    Documentação oficial da 42 sobre a "Norm".

### AI Usage

Debug: Auxílio na interpretação de mensagens de erro do compilador relativas a tipos void * e t_list *.

Arquitetura: Orientação na estruturação do Makefile para garantir que cumpre a regra de não fazer relink.
Nota: Todo o código foi escrito, testado e validado manualmente por mim para garantir o entendimento real da lógica.