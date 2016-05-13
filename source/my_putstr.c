/*
** my_putstr.c for putstr in /home/dubus_b/rendu/Unix/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 17:14:51 2015 Benjamin Dubus
** Last update Sun Dec 20 21:11:49 2015 Benjamin Dubus
*/

#include "myfx.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
