/*
** algo.c for algo in /home/dubus_b/rendu/CPE_2015_BSQ/source
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Sun Dec 20 22:08:15 2015 Benjamin Dubus
** Last update Sun Dec 20 22:31:02 2015 Benjamin Dubus
*/

#include "myfx.h"

int	is_a_square(t_info_array *board,
		    int bigest_possible,
		    int current_l,
		    int current_c)
{
  int	tmp_y;
  int	tmp_x;

  tmp_x = 0;
  while (tmp_x < bigest_possible)
    {
      if (current_l + tmp_x >= board->nb_line)
        return (0);
      tmp_y = 0;
      while (tmp_y < bigest_possible)
	{
          if (current_c + tmp_y >= board->nb_col ||
              board->array[current_l + tmp_x][current_c + tmp_y] != '.')
            return (0);
          tmp_y = tmp_y + 1;
        }
      tmp_x = tmp_x + 1;
    }
  return (1);
}

void	set_s(t_pos_square *result, int line, int colon)
{
  result->pos_x = line;
  result->pos_y = colon;
}

void	algo(t_info_array *board, t_pos_square *result, int line, int colon)
{
  int	bigest_possible;

  result->size = 0;
  while (line < board->nb_line)
    {
      colon = 0;
      while (colon < board->nb_col)
        {
          bigest_possible = 0;
          while (board->array[line][colon + bigest_possible] != '\n' &&
                 board->array[line][colon + bigest_possible] != 'o')
            bigest_possible = bigest_possible + 1;
          while (bigest_possible > result->size)
            {
              if (is_a_square(board, bigest_possible, line, colon) == 1)
                {
                  result->size = bigest_possible;
                  set_s(result, line, colon);
                }
              bigest_possible = bigest_possible - 1;
            }
          colon = colon + 1;
        }
      line = line + 1;
    }
}
