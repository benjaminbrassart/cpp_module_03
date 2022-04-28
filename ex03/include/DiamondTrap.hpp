/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:50:16 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/28 21:52:37 by bbrassar         ###   ########.fr       */
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

	public:
	DiamondTrap(void);
	DiamondTrap(DiamondTrap const &x);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &x);

	public:

}; // class DiamondTrap

#endif // DIAMONDTRAP_HPP
