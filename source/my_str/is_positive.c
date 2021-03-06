/*
** my_ispos.c for 42sh in /home/gicque_p/rendu/PSU_2013_42sh/my_history
** 
** Made by Pierrick Gicquelais
** Login   <gicque_p@epitech.net>
** 
** Started on  Mon May 19 18:14:07 2014 Pierrick Gicquelais
** Last update Wed May 28 18:42:09 2014 Pierrick Gicquelais
*/

#include	<stdlib.h>
#include	"my_str.h"

int		is_positive(char *str)
{
  if (str == NULL)
    return (1);
  while (*str)
    {
      if (!(*str >= '0' && *str <= '9'))
	return (1);
      str++;
    }
  if (*str != '\0')
    return (1);
  return (0);
}
