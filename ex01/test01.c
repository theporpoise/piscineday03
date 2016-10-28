#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main()
{
	int n;
	int *pint1;
	int **pint2;
	int ***pint3;
	int ****pint4;
	int *****pint5;
	int ******pint6;
	int *******pint7;
	int ********pint8;
	int *********pint9;

	n = 21;
	printf("number is set to %d\n", n);

	pint1 = &n;
	pint2 = &pint1;
	pint3 = &pint2;
	pint4 = &pint3;
	pint5 = &pint4;
	pint6 = &pint5;
	pint7 = &pint6;
	pint8 = &pint7;
	pint9 = &pint8;

	printf("number is sent to ft ultimate funciton.\n");
	ft_ultimate_ft(pint9);
		
	printf("number is now %d\n", n);

}
