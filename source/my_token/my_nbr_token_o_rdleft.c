/*
** my_nbr_token_o_rdleft.c for my_nbr_token_o_rdleft in /home/plasko_a/programation/epitech/PSU_2013_42sh/source/my_token
** 
** Made by Antoine Plaskowski
** Login   <antoine.plaskowski@epitech.eu>
** 
** Started on  Sun May 25 14:07:51 2014 Antoine Plaskowski
** Last update Sun May 25 14:10:30 2014 Antoine Plaskowski
*/

#include	<stdlib.h>
#include	"my_token.h"

int		my_nbr_token_o_rdleft(t_token *token)
{
  int		i;

  i = 0;
  token = my_first_token(token);
  while (token != NULL)
    {
      if (token->type == O_RDLEFT)
	i++;
      token = token->next;
    }
  return (i);
}
