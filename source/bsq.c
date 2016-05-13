/*
** bsq.c for bsq in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_BSQ/source
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Thu Dec 17 16:46:47 2015 Benjamin Dubus
** Last update Sun Dec 20 22:35:55 2015 Benjamin Dubus
*/

#include "myfx.h"

char		**get_array(char *map, int nb_line, int nb_col, int index_map)
{
  char		**array;
  int		line;
  int		colon;

  if ((array = malloc(sizeof(char *) * nb_line)) == NULL)
    exit(1);
  while (line < nb_line)
    {
      if ((array[line] = malloc(sizeof(char) * nb_col)) == NULL)
	exit(1);
      line = line + 1;
    }
  line = 0;
  while (line < nb_line)
    {
      colon = 0;
      while (colon < nb_col)
	{
	  array[line][colon] = map[index_map];
	  index_map = index_map + 1;
	  colon = colon + 1;
	}
      line = line + 1;
    }
  return (array);
}

void		modif_map(t_info_array *board, t_pos_square *result)
{
  int		line;
  int		colon;

  line = 0;
  while (line < result->size)
    {
      colon = 0;
      while (colon < result->size)
	{
	  board->array[result->pos_x + line][result->pos_y + colon] = 'x';
	  colon = colon + 1;
	}
      line = line + 1;
    }
}

int		main(int argc, char **argv)
{
  t_info_array	board;
  t_pos_square	result;
  char		*file;
  char		*line_file;
  char		*map;

  board.nb_line = 0;
  board.nb_col = 0;
  board.array = NULL;
  if (argc == 1)
    my_putstr("Usage: ./bsq [FILE] ");
  file = fd(argv);
  line_file = line(file);
  board.nb_line = my_getnbr(line_file);
  free(line_file);
  map = maps(file);
  board.nb_col = my_col_nbr(map);
  board.array = get_array(map, board.nb_line, board.nb_col, 0);
  algo(&board, &result, 0, 0);
  modif_map(&board, &result);
  my_putchar_et(&board);
  free(file);
  return (0);
}
