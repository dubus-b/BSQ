/*
** my_putchar_et.c for the game in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_BSQ/source
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Fri Dec 18 22:07:28 2015 Benjamin Dubus
** Last update Sun Dec 20 21:10:49 2015 Benjamin Dubus
*/

#include "myfx.h"

void	my_putchar_et(t_info_array *board)
{
  int	colon;
  int	line;

  line = 0;
  while (line < board->nb_line)
    {
      colon = 0;
      while (colon < board->nb_col)
        {
          my_putchar(board->array[line][colon]);
          colon = colon + 1;
        }
      line = line + 1;
    }
}
