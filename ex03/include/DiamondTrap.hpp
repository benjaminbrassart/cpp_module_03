/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:50:16 by bbrassar          #+#    #+#             */
/*   Updated: 2022/05/01 18:17:46 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
	static std::string const	DEFAULT_NAME;
	static std::string const	PREFIX;

	private:
	std::string	name;

	protected:
	using FragTrap::hitPoints;
	using ScavTrap::energyPoints;
	using FragTrap::attackDamage;

	public:
	DiamondTrap(void);
	DiamondTrap(DiamondTrap const &x);
	DiamondTrap(std::string const &name);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &x);

	public:
	using ScavTrap::attack;

	void	whoAmI(void);
}; // class DiamondTrap

#endif // DIAMONDTRAP_HPP
