/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:11:06 by bbrassar          #+#    #+#             */
/*   Updated: 2022/05/01 19:05:31 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) :
	name(ClapTrap::DEFAULT_NAME),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout
		<< ClapTrap::PREFIX
		<< ClapTrap::GREEN
		<< "Default constructor called"
		<< ClapTrap::RESET
		<< std::endl;
}

ClapTrap::ClapTrap(std::string const &name) :
	name(name),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout
		<< ClapTrap::PREFIX
		<< ClapTrap::GREEN
		<< "Initialization constructor called (name: "
		<< name
		<< ")"
		<< ClapTrap::RESET
		<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &x) :
	name(x.name),
	hitPoints(x.hitPoints),
	energyPoints(x.energyPoints),
	attackDamage(x.attackDamage)
{
	std::cout
		<< ClapTrap::PREFIX
		<< ClapTrap::GREEN
		<< "Copy constructor called (name: "
		<< x.name
		<< ")"
		<< ClapTrap::RESET
		<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< ClapTrap::PREFIX
		<< ClapTrap::GREEN
		<< "Destructor called"
		<< ClapTrap::RESET
		<< std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &x)
{
	std::cout
		<< ClapTrap::PREFIX
		<< ClapTrap::GREEN
		<< "Copy assignment operator called (name: "
		<< x.name
		<< ")"
		<< ClapTrap::RESET
		<< std::endl;
	this->name = x.name;
	this->hitPoints = x.hitPoints;
	this->energyPoints = x.energyPoints;
	this->attackDamage = x.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << ClapTrap::PREFIX;
	if (this->hitPoints == 0)
	{
		std::cout
			<< ClapTrap::RED
			<< this->name
			<< " tried to attack "
			<< target
			<< ", but it has no hit point left.";
	}
	else if (this->energyPoints == 0)
	{
		std::cout
			<< ClapTrap::RED
			<< this->name
			<< " tried to attack "
			<< target
			<< ", but it has no energy point left.";
	}
	else
	{
		--this->energyPoints;
		std::cout
			<< ClapTrap::BLUE
			<< this->name
			<< " attacks "
			<< target
			<< ", causing "
			<< this->attackDamage
			<< " points of damage!";
	}
	std::cout << ClapTrap::RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << ClapTrap::PREFIX;
	if (amount > this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout
		<< ClapTrap::BLUE
		<< this->name
		<< " takes "
		<< amount
		<< " points of damage."
		<< " It has "
		<< this->hitPoints
		<< " hit points left."
		<< ClapTrap::RESET
		<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << ClapTrap::PREFIX;
	if (this->hitPoints == 0)
	{
		std::cout
			<< ClapTrap::RED
			<< this->name
			<< " tried to repair itself, but it has no hit point left.";
	}
	else if (this->energyPoints == 0)
	{
		std::cout
			<< ClapTrap::RED
			<< this->name
			<< " tried to repair itself, but it has no energy point left.";
	}
	else
	{
		--this->energyPoints;
		this->hitPoints += amount;
		std::cout
			<< ClapTrap::BLUE
			<< this->name
			<< " repairs itself by "
			<< amount
			<< " points."
			<< " It has "
			<< this->hitPoints
			<< " hit points left.";
	}
	std::cout << ClapTrap::RESET << std::endl;
}

std::string const ClapTrap::DEFAULT_NAME = "__ClapTrap__";
std::string const ClapTrap::PREFIX = "\033[43;30m" " ClapTrap " "\033[0m    ";
std::string const ClapTrap::RED = "\033[31m";
std::string const ClapTrap::GREEN = "\033[37m";
std::string const ClapTrap::BLUE = "\033[34m";
std::string const ClapTrap::RESET = "\033[0m";
