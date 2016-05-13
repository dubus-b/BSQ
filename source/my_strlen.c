/*
** my_strlen.c for strlen in /home/dubus_b/Downloads/lib/lib/my
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Fri Nov  6 16:49:16 2015 Benjamin Dubus
** Last update Sun Dec 20 21:11:25 2015 Benjamin Dubus
*/

#include "myfx.h"

int	my_strlen(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    index = index + 1;
  return (index);
}
