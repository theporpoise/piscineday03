#include <stdio.h>

void ft_swap(int *a, int *b);

int	main()
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 21;
	b = 42;
	pa = &a;
	pb = &b;

	printf("a is %d, b is %d, pointer to a is %p, pointer to b is %p\n", a, b, pa, pb);
	printf("sending the pointers to ft_swawp\nafter swap:\n");
	ft_swap(pa, pb);

	printf("a is %d, b is %d, pointer to a is %p, pointer to b is %p\n", a, b, pa, pb);
	
	return (0);
}
