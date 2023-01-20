/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeham <yeham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:09:12 by yeham             #+#    #+#             */
/*   Updated: 2022/12/18 16:20:22 by yeham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	how_many_philo(char *argv1)
{
	t_data	philo_num;

	philo_num = ft_atoi(argv1);
	if (philo_num < 1)
		exit(0)
	else if (philo_num == 1)
		die;
	else if (philo_num % 2 == 0)
		짝수일때
	else
		홀수일때
}

void	check(int argc, char *argv[])
{
	how_many_philo(argv[1]);
	argv[2];
	argv[3];
	argv[4];
	if (argc == 6)
	argv[5];
}

int	main(int argc, char *argv[])
{
	if (!(argc == 5 || argc == 6))
		return (0);
	check(argc, argv);
}
