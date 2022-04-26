/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:53 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/26 19:08:05 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <exception>
# include <iostream>

# define TEST_DECL()	static struct test __tests[] =
# define TEST(x)		{#x, x},
# define TEST_RUN()		{								\
	for (												\
		unsigned int i = 0;								\
		i < (sizeof (__tests) / sizeof (*__tests));		\
		++i)											\
		{												\
			if (i != 0)									\
				std::cout << std::endl;					\
			std::cout									\
				<< "\033[32m"							\
				<< "================="					\
				<< std::endl							\
				<< __tests[i].name						\
				<< std::endl							\
				<< "================="					\
				<< "\033[0m"							\
				<< std::endl;							\
			try											\
			{											\
				__tests[i].fn();						\
			}											\
			catch (std::exception &e)					\
			{											\
				std::cout								\
					<< "\033[31m"						\
					<< e.what()							\
					<< std::endl;						\
			}											\
			std::cout << "\033[0m";						\
		}												\
	}

struct test
{
	char const	*name;
	void		(*fn)(void);
};

#endif // TESTS_H
