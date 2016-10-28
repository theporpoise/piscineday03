#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div;
	int mod;
	int *pdiv;
	int *pmod;

	div = 0;
	mod = 0;
	pdiv = &div;
	pmod = &mod;
	
	printf("value of a is 42, value of b is 21\n");
	ft_div_mod(42, 21, pdiv, pmod);
	printf("value of *pdiv is %d, value of *pmod is %d\n", *pdiv, *pmod);

	printf("value of a is 100, value of b is 24\n");
	ft_div_mod(100, 24, pdiv, pmod);
	printf("value of *pdiv is %d, value of *pmod is %d\n", *pdiv, *pmod);

	printf("value of a is -31, value of b is 10\n");
	ft_div_mod(-31, 10, pdiv, pmod);
	printf("value of *pdiv is %d, value of *pmod is %d\n", *pdiv, *pmod);





}
