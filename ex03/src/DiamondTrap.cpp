/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:53:10 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/28 22:01:52 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) :
	ClapTrap(DiamondTrap::DEFAULT_NAME),
	ScavTrap(),
	FragTrap()
{
	std::cout
		<< DiamondTrap::PREFIX
		<< DiamondTrap::GREEN
		<< "Default constructor called"
		<< DiamondTrap::RESET
		<< std::endl;
	this->name = DiamondTrap::DEFAULT_NAME;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

DiamondTrap::DiamondTrap(std::string const &name) :
	ClapTrap(name)
{
	std::cout
		<< DiamondTrap::PREFIX
		<< DiamondTrap::GREEN
		<< "Initialization constructor called (name: "
		<< name
		<< ")"
		<< DiamondTrap::RESET
		<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

DiamondTrap::DiamondTrap(DiamondTrap const &x) :
	ClapTrap(x)
{
	std::cout
		<< DiamondTrap::PREFIX
		<< DiamondTrap::GREEN
		<< "Copy constructor called (name: "
		<< x.name
		<< ")"
		<< DiamondTrap::RESET
		<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

DiamondTrap::~DiamondTrap()
{
	std::cout
		<< DiamondTrap::PREFIX
		<< DiamondTrap::GREEN
		<< "Destructor called"
		<< DiamondTrap::RESET
		<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &x)
{
	std::cout
		<< DiamondTrap::PREFIX
		<< DiamondTrap::GREEN
		<< "Copy assignment operator called (name: "
		<< x.name
		<< ")"
		<< DiamondTrap::RESET
		<< std::endl;
	this->name = x.name;
	this->hitPoints = x.hitPoints;
	this->energyPoints = x.energyPoints;
	this->attackDamage = x.attackDamage;
	return (*this);
}

void DiamondTrap::highFiveGuys(void)
{
	std::cout
		<< DiamondTrap::BLUE
		<< this->name
		<< " says: Guys?? High five?!"
		<< DiamondTrap::RESET
		<< std::endl;
}

std::string const DiamondTrap::DEFAULT_NAME = "__FragTrap__";
std::string const DiamondTrap::PREFIX = "\033[41;30m" " DiamondTrap " "\033[0m ";
