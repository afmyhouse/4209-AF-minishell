/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   799_exec_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:43:45 by antoda-s          #+#    #+#             */
/*   Updated: 2024/03/08 00:02:56 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	fork_error(char **path)
{
	write(2, "Error: fork failed\n", 19);
	g_exit_status = 1;
	return (free_array(path, ERROR));
}

int	pipe_error(char **path)
{
	write(2, "Error: pipe failed\n", 19);
	g_exit_status = 1;
	return (free_array(path, ERROR));
}