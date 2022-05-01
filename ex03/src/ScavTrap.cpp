/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:28:07 by bbrassar          #+#    #+#             */
/*   Updated: 2022/05/01 19:05:31 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) :
	ClapTrap()
{
	std::cout
		<< ScavTrap::PREFIX
		<< ScavTrap::GREEN
		<< "Default constructor called"
		<< ScavTrap::RESET
		<< std::endl;
	this->name = ScavTrap::DEFAULT_NAME;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) :
	ClapTrap(name)
{
	std::cout
		<< ScavTrap::PREFIX
		<< ScavTrap::GREEN
		<< "Initialization constructor called (name: "
		<< name
		<< ")"
		<< ScavTrap::RESET
		<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &x) :
	ClapTrap(x)
{
	std::cout
		<< ScavTrap::PREFIX
		<< ScavTrap::GREEN
		<< "Copy constructor called (name: "
		<< x.name
		<< ")"
		<< ScavTrap::RESET
		<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout
		<< ScavTrap::PREFIX
		<< ScavTrap::GREEN
		<< "Destructor called"
		<< ScavTrap::RESET
		<< std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &x)
{
	std::cout
		<< ScavTrap::PREFIX
		<< ScavTrap::GREEN
		<< "Copy assignment operator called (name: "
		<< x.name
		<< ")"
		<< ScavTrap::RESET
		<< std::endl;
	this->name = x.name;
	this->hitPoints = x.hitPoints;
	this->energyPoints = x.energyPoints;
	this->attackDamage = x.attackDamage;
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << ScavTrap::PREFIX;
	if (this->hitPoints == 0)
	{
		std::cout
			<< ScavTrap::RED
			<< this->name
			<< " tried to attack "
			<< target
			<< ", but it has no hit point left.";
	}
	else if (this->energyPoints == 0)
	{
		std::cout
			<< ScavTrap::RED
			<< this->name
			<< " tried to attack "
			<< target
			<< ", but it has no energy point left.";
	}
	else
	{
		--this->energyPoints;
		std::cout
			<< ScavTrap::BLUE
			<< this->name
			<< " attacks "
			<< target
			<< ", dealing "
			<< this->attackDamage
			<< " points of damage!";
	}
	std::cout << ScavTrap::RESET << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout
		<< ClapTrap::BLUE
		<< this->name
		<< " is now in gate keeper mode."
		<< ClapTrap::RESET
		<< std::endl;
}

std::string const ScavTrap::DEFAULT_NAME = "__ScavTrap__";
std::string const ScavTrap::PREFIX = "\033[46;30m" " ScavTrap " "\033[0m    ";
