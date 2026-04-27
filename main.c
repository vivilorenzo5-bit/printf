
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	meu;
	int	orig;

	printf("--- Teste de Strings ---\n");
	meu = ft_printf("Meu: [%s]\n", "42 Lisboa");
	orig = printf("Ori: [%s]\n", "42 Lisboa");
	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

	printf("--- Teste de Inteiros ---\n");
	meu = ft_printf("Meu: %d | %i\n", 2147483647, -2147483648);
	orig = printf("Ori: %d | %i\n", INT_MAX, INT_MIN);
	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

	printf("--- Teste de NULL ---\n");
	meu = ft_printf("Meu: %s\n", (char *)NULL);
	orig = printf("Ori: %s\n", (char *)NULL);
	printf("Retornos: Meu %d | Ori %d\n", meu, orig);

	return (0);
}
