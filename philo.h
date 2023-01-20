/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeham <yeham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:37:39 by yeham             #+#    #+#             */
/*   Updated: 2022/12/18 17:51:47 by yeham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>

typedef struct s_info
{
	pthread_mutex_t	*fork;
	pthread_mutex_t	*eat;
	pthread_mutex_t	*sleep;
	pthread_mutex_t	*think;
	pthread_mutex_t	*die;
}	t_info;

typedef struct s_data
{
	pthread_t	*philo_num;
	int			*die_flag;
}	t_data;

#endif
