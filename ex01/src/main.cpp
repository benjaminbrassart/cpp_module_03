/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:22 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/26 19:32:47 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"
#include "ClapTrap.hpp"

static void	_constructor_default0(void);
static void	_constructor_default1(void);
static void	_constructor_copy(void);
static void	_operator_copy(void);
static void	_attack0(void);
static void	_attack1(void);
static void	_attack2(void);
static void	_repair0(void);
static void	_repair1(void);
static void	_repair2(void);
static void	_damage0(void);
static void	_damage1(void);
static void	_damage2(void);

int	main(void)
{
	TEST_DECL() {
		TEST(_constructor_default0)
		TEST(_constructor_default1)
		TEST(_constructor_copy)
		TEST(_operator_copy)
		TEST(_attack0)
		TEST(_attack1)
		TEST(_attack2)
		TEST(_repair0)
		TEST(_repair1)
		TEST(_repair2)
		TEST(_damage0)
		TEST(_damage1)
		TEST(_damage2)
	};
	TEST_RUN();
}

static void	_constructor_default0(void)
{
	ClapTrap();
}

static void	_constructor_default1(void)
{
	ClapTrap("coucou");
}

static void	_constructor_copy(void)
{
	ClapTrap	c("bonjour");
	ClapTrap	copy(c);
}

static void	_operator_copy(void)
{
	ClapTrap	c;

	c = ClapTrap("salut");
}

static void	_attack0(void)
{
	ClapTrap c("hello");

	c.attack("123");
}

static void	_attack1(void)
{
	ClapTrap c("hello");

	c.attack("123");
	c.attack("123");
	c.attack("123");
	c.attack("123");
}

static void	_attack2(void)
{
	ClapTrap c("hello");
	for (int i = 0; i < 30; ++i)
		c.attack("123");
}

static void	_repair0(void)
{
	ClapTrap c("hello");

	c.beRepaired(12);
}

static void	_repair1(void)
{
	ClapTrap c("hello");

	c.beRepaired(12);
	c.beRepaired(15);
	c.beRepaired(1);
}

static void	_repair2(void)
{
	ClapTrap c("hello");

	c.beRepaired(12);
	c.takeDamage(44);
	c.beRepaired(15);
	c.beRepaired(1);
}

static void	_damage0(void)
{

	ClapTrap c("hello");

	c.takeDamage(1);
}

static void	_damage1(void)
{

	ClapTrap c("hello");

	c.takeDamage(1);
	c.takeDamage(2);
	c.takeDamage(3);
	c.takeDamage(22);
}

static void	_damage2(void)
{

	ClapTrap c("hello");

	c.takeDamage(44);
	c.takeDamage(44);
}
