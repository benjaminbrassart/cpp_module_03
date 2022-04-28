/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:25:32 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/28 20:40:24 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
	private:
	static std::string const	DEFAULT_NAME;
	static std::string const	PREFIX;

	public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &x);
	ScavTrap(std::string const &name);
	~ScavTrap();

	ScavTrap		&operator=(ScavTrap const &x);

	public:
	virtual void	attack(std::string const &target);
	void			guardGate(void);
}; // class ScavTrap

#endif // SCAVTRAP_HPP
