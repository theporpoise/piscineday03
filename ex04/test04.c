#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 64;
	b = 2;
	pa = &a;
	pb = &b;
	
	printf("value of a is %d, value of b is %d\n", a, b);
	ft_ultimate_div_mod(pa, pb);
	printf("after function:\nvalue of a is %d, value of b is %d\n\n", a, b);

	a = 100;
	b = 9;

	printf("value of a is %d, value of b is %d\n", a, b);
	ft_ultimate_div_mod(pa, pb);
	printf("after function:\nvalue of a is %d, value of b is %d\n\n", a, b);

	a = -11;
	b = 7;

	printf("value of a is %d, value of b is %d\n", a, b);
	ft_ultimate_div_mod(pa, pb);
	printf("after function:\nvalue of a is %d, value of b is %d\n\n", a, b);

	a = 131;
	b = 13;

	printf("value of a is %d, value of b is %d\n", a, b);
	ft_ultimate_div_mod(pa, pb);
	printf("after function:\nvalue of a is %d, value of b is %d\n\n", a, b);



}
