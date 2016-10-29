/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 11:48:55 by mgould            #+#    #+#             */
/*   Updated: 2016/10/28 12:41:34 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
	char *str;
	
	str = "abcde";
	printf("the value of str is %p\n", str);
	printf("the value of *str is %s\n", str);
	printf("function ft_putstr outputs on next line:\n");
	ft_putstr(str);
	printf("\nthere is a newline at the start and end of this line\n");

	str = "on the way to the store";
	printf("the value of str is %p\n", str);
	printf("the value of *str is %s\n", str);
	printf("function ft_putstr outputs on next line:\n");
	ft_putstr(str);
	printf("\nthere is a newline at the start and end of this line\n");

	str = "bacon is delicious";
	printf("the value of str is %p\n", str);
	printf("the value of *str is %s\n", str);
	printf("function ft_putstr outputs on next line:\n");
	ft_putstr(str);
	printf("\nthere is a newline at the start and end of this line\n");

	str = "what is the answer to the universe?  42.";
	printf("the value of str is %p\n", str);
	printf("the value of *str is %s\n", str);
	printf("function ft_putstr outputs on next line:\n");
	ft_putstr(str);
	printf("\nthere is a newline at the start and end of this line\n");

}
