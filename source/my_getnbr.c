/*
** my_getnbr.c for getnbr in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_Pushswap/test
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Sun Nov 22 13:11:11 2015 Benjamin Dubus
** Last update Sun Dec 20 21:13:23 2015 Benjamin Dubus
*/

#include "myfx.h"

int	my_getnbr(char *str)
{
  int	var;
  int	inv;
  int	i;

  inv = 1;
  var = 0;
  i = 0;
  if (str == NULL)
    return (0);
  while ((*str < 47 || *str > 58) && *str != 0)
    {
      str = str + 1;
      i = i + 1;
    }
  if (i > 0 && *(str - 1) == 45)
    inv = -1;
  while (*str != 0 && *str >= '0' && *str <= '9')
    {
      var = var * 10;
      var = var + *str - 48;
      str = str + 1;
    }
  var = var * inv;
  return (var);
}
