#include <stdio.h>

void	ft_ft(int *nbr);

int main()
{
	int n;
	int * pint;
	n = 21;
	pint = &n;

	printf("the value of number is set to %d\n", n);
	printf("the value of pointer to number  is %p\n", pint);

	printf("pointer to number - the address -  is sent through function ft ft\n");
	ft_ft(pint);

	printf("the value of n is %d",  n);
	printf("the value of pointer to number  is %p\n", pint);
}
