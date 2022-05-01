/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:22 by bbrassar          #+#    #+#             */
/*   Updated: 2022/05/01 19:01:51 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void	_constructor_default0(void);
static void	_constructor_default1(void);
static void	_constructor_default2(void);
static void	_constructor_default3(void);
static void	_constructor_copy0(void);
static void	_constructor_copy1(void);
static void	_constructor_copy2(void);
static void	_operator_copy0(void);
static void	_operator_copy1(void);
static void	_operator_copy2(void);
static void	_attack0(void);
static void	_attack1(void);
static void	_attack2(void);
static void	_attack3(void);
static void	_attack4(void);
static void	_attack5(void);
static void	_repair0(void);
static void	_repair1(void);
static void	_repair2(void);
static void	_repair3(void);
static void	_repair4(void);
static void	_repair5(void);
static void	_damage0(void);
static void	_damage1(void);
static void	_damage2(void);
static void	_damage3(void);
static void	_damage4(void);
static void	_damage5(void);
static void	_guard(void);
static void	_highfive(void);
static void	_whoAmI(void);

int	main(void)
{
	TEST_DECL() {
		TEST(_constructor_default0)
		TEST(_constructor_default1)
		TEST(_constructor_default2)
		TEST(_constructor_default3)
		TEST(_constructor_copy0)
		TEST(_constructor_copy1)
		TEST(_constructor_copy2)
		TEST(_operator_copy0)
		TEST(_operator_copy1)
		TEST(_operator_copy2)
		TEST(_attack0)
		TEST(_attack1)
		TEST(_attack2)
		TEST(_attack3)
		TEST(_attack4)
		TEST(_attack5)
		TEST(_repair0)
		TEST(_repair1)
		TEST(_repair2)
		TEST(_repair3)
		TEST(_repair4)
		TEST(_repair5)
		TEST(_damage0)
		TEST(_damage1)
		TEST(_damage2)
		TEST(_damage3)
		TEST(_damage4)
		TEST(_damage5)
		TEST(_guard)
		TEST(_highfive)
		TEST(_whoAmI)
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

static void	_constructor_default2(void)
{
	ScavTrap("coucou");
}

static void	_constructor_default3(void)
{
	FragTrap("coucou");
}

static void	_constructor_copy0(void)
{
	ClapTrap	c("bonjour");
	ClapTrap	copy(c);
}

static void	_constructor_copy1(void)
{
	ScavTrap	c("bonjour");
	ScavTrap	copy(c);
}

static void	_constructor_copy2(void)
{
	FragTrap	c("bonjour");
	FragTrap	copy(c);
}

static void	_operator_copy0(void)
{
	ClapTrap	c;

	c = ClapTrap("salut");
}

static void	_operator_copy1(void)
{
	ScavTrap	c;

	c = ScavTrap("salut");
}

static void	_operator_copy2(void)
{
	FragTrap	c;

	c = FragTrap("salut");
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

static void	_attack3(void)
{
	ScavTrap c("hello");
	for (int i = 0; i < 30; ++i)
		c.attack("123");
}

static void	_attack4(void)
{
	FragTrap c("hello");
	for (int i = 0; i < 30; ++i)
		c.attack("123");
}

static void	_attack5(void)
{
	DiamondTrap	c("blah");
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

static void	_repair3(void)
{
	ScavTrap c("hello");

	c.beRepaired(12);
	c.takeDamage(44);
	c.beRepaired(15);
	c.beRepaired(1);
}

static void	_repair4(void)
{
	FragTrap c("hello");

	c.beRepaired(12);
	c.takeDamage(44);
	c.beRepaired(15);
	c.beRepaired(1);
}

static void	_repair5(void)
{
	DiamondTrap c("blah");

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

static void	_damage3(void)
{
	ScavTrap c("hello");

	c.takeDamage(44);
	c.takeDamage(44);
}

static void	_damage4(void)
{
	FragTrap c("hello");

	c.takeDamage(44);
	c.takeDamage(44);
}

static void	_damage5(void)
{
	DiamondTrap c("blah");

	c.takeDamage(44);
	c.takeDamage(44);
}

static void	_guard(void)
{
	ScavTrap c("hai");

	c.guardGate();
}

static void	_highfive(void)
{
	FragTrap c("hai");

	c.highFiveGuys();
}

static void	_whoAmI(void)
{
	DiamondTrap c("blah");

	c.whoAmI();
	c = DiamondTrap();
	c.whoAmI();
}
