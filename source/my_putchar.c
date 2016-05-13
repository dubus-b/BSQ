/*
** my_putchar.c for putchar in /home/dubus_b/rendu/Unix/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 17:12:29 2015 Benjamin Dubus
** Last update Sun Dec 20 21:10:05 2015 Benjamin Dubus
*/

#include "myfx.h"

void	my_putchar(char letter)
{
  write(1, &letter, 1);
}
