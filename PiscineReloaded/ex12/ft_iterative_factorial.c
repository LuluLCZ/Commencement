#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int resultat;

	resultat = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (resultat != 2)
	{
		nb = nb * resultat;
		resultat--;
	}
	return (nb);
}

int	main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
