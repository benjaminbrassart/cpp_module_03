/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:53:10 by bbrassar          #+#    #+#             */
/*   Updated: 2022/05/01 19:05:31 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) :
	ClapTrap(DiamondTrap::DEFAULT_NAME + "_clap_name"),
	ScavTrap(DiamondTrap::DEFAULT_NAME + "_clap_name"),
	FragTrap(DiamondTrap::DEFAULT_NAME + "_clap_name"),
	name(DiamondTrap::DEFAULT_NAME)
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
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	name(name)
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
	ClapTrap(x),
	ScavTrap(x),
	FragTrap(x),
	name(x.name)
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
	this->ClapTrap::name = x.ClapTrap::name;
	this->name = x.name;
	this->hitPoints = x.hitPoints;
	this->energyPoints = x.energyPoints;
	this->attackDamage = x.attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout
		<< DiamondTrap::PREFIX
		<< "clap_name: `"
		<< this->ClapTrap::name
		<< "`, name: "
		<< this->name
		<< std::endl;
}

std::string const DiamondTrap::DEFAULT_NAME = "__DiamondTrap__";
std::string const DiamondTrap::PREFIX = "\033[42;30m" " DiamondTrap " "\033[0m ";
