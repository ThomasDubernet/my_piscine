/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 16:37:25 by marvin            #+#    #+#             */
/*   Updated: 2020/03/13 16:37:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    char first;
    char second;
    char third;

    first = '0' - 1;
    while (first++ <= '9')
    {
        second = first;
        while (second++ <= '9')
        {
            third = second + 1;
            while (third <= '9')
            {
                ft_putchar(first);
                ft_putchar(second);
                ft_putchar(third);
                if (first != '7' || second != '8' || third != '9')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                third++;
            }
            
        }
        
    }
    
}

int main()
{
    ft_print_comb();
    return 0;
}
