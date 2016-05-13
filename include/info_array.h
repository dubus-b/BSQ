/*
** info_array.h for array in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_BSQ/include
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Fri Dec 18 23:09:34 2015 Benjamin Dubus
** Last update Sat Dec 19 01:15:20 2015 Benjamin Dubus
*/

typedef struct	s_info_array
{
  char		**array;
  int		nb_line;
  int		nb_col;
}		t_info_array;

typedef struct	s_pos_square
{
  int		pos_x;
  int		pos_y;
  int		size;
}		t_pos_square;
