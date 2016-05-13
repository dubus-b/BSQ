/*
** my_put_nbr_fd.c for putnbr in /home/dubus_b/rendu/Unix/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 17:16:43 2015 Benjamin Dubus
** Last update Sun Dec 20 21:11:03 2015 Benjamin Dubus
*/

#include "myfx.h"

void	my_put_nbr(int nbr)
{
  if (nbr == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  if (nbr >= 10)
    {
      my_put_nbr(nbr / 10);
      my_putchar(nbr % 10 + '0');
    }
  else
    my_putchar(nbr + '0');
}
