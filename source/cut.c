/*
** cut.c for cut-fx in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_BSQ/source
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Sun Dec 20 14:45:43 2015 Benjamin Dubus
** Last update Sun Jan 17 21:51:02 2016 Benjamin Dubus
*/

#include "myfx.h"

char		*line(char *file)
{
  int		i;
  char		*line;

  i = 0;
  while (file[i] != '\n')
    i = i + 1;
  line = malloc(sizeof(char) * (i + 1));
  if (line == NULL)
  exit(1);
  i = 0;
  while (file[i] != '\n')
    {
      line[i] = file[i];
      i = i + 1;
    }
  line[i] = '\0';
  return (line);
}

char		*maps(char *file)
{
  char		*map;

  map = file;
  while (map[0] != '\n')
    map += 1;
  return (map + 1);
}

int             my_col_nbr(char *map)
{
  int		nb_col;

  nb_col = 0;
  while (map[nb_col] != '\n')
    nb_col = nb_col + 1;
  nb_col = nb_col + 1;
  return (nb_col);
}
