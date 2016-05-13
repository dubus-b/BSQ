/*
** fd.c for fd in /home/dubus_b
** 
** made by benjamin dubus
** login   <dubus_b@epitech.net>
** 
** started on  mon dec 14 15:23:09 2015 benjamin dubus
** Last update Sun Dec 20 21:08:57 2015 Benjamin Dubus
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "myfx.h"

char		*fd(char **argv)
{
  int		fd;
  int		ret;
  char		*buf;
  struct stat	bsize;

  if (stat(argv[1], &bsize) == -1)
    exit(1);
  buf = malloc(sizeof(char) * bsize.st_size + 1);
  if (buf == NULL)
    exit(1);
  fd = open(argv[1] , O_RDONLY);
  if (fd == -1)
    {
      free(buf);
      my_putstr("open failed\n");
      exit(1);
    }
  if ((ret = read(fd, buf, bsize.st_size)))
    buf[bsize.st_size] = '\0';
  if (ret == -1)
    exit(1);
  if (close(fd) == -1)
    exit(1);
  return (buf);
}
