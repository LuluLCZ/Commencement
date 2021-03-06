/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lulu <Lulu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:01:11 by Lulu              #+#    #+#             */
/*   Updated: 2017/08/14 12:05:08 by Lulu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int     a;

    a = 0;
    while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
        a++;
    return (s1[a] - s2[a]);
}

int     main(int ac, char **av)
{
    if (ac == 3)
        printf("%d", ft_strcmp(av[1], av[2]));
    return (0);
}