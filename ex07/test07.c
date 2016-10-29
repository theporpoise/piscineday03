/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 11:48:55 by mgould            #+#    #+#             */
/*   Updated: 2016/10/28 23:35:56 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str);

int main()
{

	char *string;
	string = "hello world";

	ft_strrev(string);

	printf("string is %s", string);
} 
