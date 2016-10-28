#include <stdio.h>

void	ft_ft(int *nbr);

int main()
{
	int n;
	int * pint;
	n = 21;
	pint = &n;

	ft_ft(pint);

	printf("the value of n is %d",  n);

}
