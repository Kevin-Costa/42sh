/*
** my_char_in_str.c for my_char_in_str in /home/plasko_a/rendu/Piscine-C-lib/my
** 
** Made by Antoine Plaskowski
** Login   <plasko_a@epitech.net>
** 
** Started on  Fri Nov 15 05:46:34 2013 Antoine Plaskowski
** Last update Sat May 10 18:51:30 2014 Antoine Plaskowski
*/

#include	<stdlib.h>

int		my_char_in_str(const char c, const char *str)
{
  int		i;

  if (str != NULL)
    {
      i = 0;
      while (str[i] != '\0')
	{
	  if (str[i] == c)
	    return (i);
	  i++;
	}
    }
  return (-1);
}
