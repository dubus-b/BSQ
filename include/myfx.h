/*
** myfx.h for myfx.h in /home/dubus_b/rendu/C_Prog_Elem/CPE_2015_BSQ/include
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Sun Dec 20 21:07:13 2015 Benjamin Dubus
** Last update Sun Dec 20 22:29:40 2015 Benjamin Dubus
*/

#ifndef MYFX_H_
# define MYFX_H_

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "info_array.h"

int	is_a_square(t_info_array *board,
                    int bigest_possible,
                    int current_l,
                    int current_c);
void	set_s(t_pos_square *result, int line, int colon);
void	algo(t_info_array *board, t_pos_square *result, int line, int colon);
char	*line(char *file);
char	*maps(char *file);
int	my_col_nbr(char *map);
void	my_putchar_et(t_info_array *board);
char    *fd(char **argv);
void	my_putchar(char c);
int	my_getnbr(char *str);
void	my_putstr(char *str);
void	my_put_nbr(int nbr);
int	my_strlen(char *str);

#endif /* !MYFX_H_ */
