/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:28:07 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/28 21:43:01 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) :
	ClapTrap()
{
	std::cout
		<< FragTrap::PREFIX
		<< FragTrap::GREEN
		<< "Default constructor called"
		<< FragTrap::RESET
		<< std::endl;
	this->name = FragTrap::DEFAULT_NAME;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

FragTrap::FragTrap(std::string const &name) :
	ClapTrap(name)
{
	std::cout
		<< FragTrap::PREFIX
		<< FragTrap::GREEN
		<< "Initialization constructor called (name: "
		<< name
		<< ")"
		<< FragTrap::RESET
		<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

FragTrap::FragTrap(FragTrap const &x) :
	ClapTrap(x)
{
	std::cout
		<< FragTrap::PREFIX
		<< FragTrap::GREEN
		<< "Copy constructor called (name: "
		<< x.name
		<< ")"
		<< FragTrap::RESET
		<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

FragTrap::~FragTrap()
{
	std::cout
		<< FragTrap::PREFIX
		<< FragTrap::GREEN
		<< "Destructor called"
		<< FragTrap::RESET
		<< std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &x)
{
	std::cout
		<< FragTrap::PREFIX
		<< FragTrap::GREEN
		<< "Copy assignment operator called (name: "
		<< x.name
		<< ")"
		<< FragTrap::RESET
		<< std::endl;
	this->name = x.name;
	this->hitPoints = x.hitPoints;
	this->energyPoints = x.energyPoints;
	this->attackDamage = x.attackDamage;
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout
		<< FragTrap::BLUE
		<< this->name
		<< " says: Guys?? High five?!"
		<< FragTrap::RESET
		<< std::endl;
}

std::string const FragTrap::DEFAULT_NAME = "__FragTrap__";
std::string const FragTrap::PREFIX = "\033[41;30m" " FragTrap " "\033[0m ";
