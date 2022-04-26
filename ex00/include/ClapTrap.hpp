/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:58:26 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/26 19:29:15 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <ostream>
# include <string>

class ClapTrap
{
	private:
	static std::string const	DEFAULT_NAME;
	static std::string const	PREFIX;
	static std::string const	RED;
	static std::string const	GREEN;
	static std::string const	BLUE;
	static std::string const	RESET;

	private:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

	public:
	ClapTrap(void);
	ClapTrap(ClapTrap const &x);
	ClapTrap(std::string const &name);
	~ClapTrap();

	ClapTrap			&operator=(ClapTrap const &x);

	public:
	void				attack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
}; // class ClapTrap

#endif // CLAPTRAP_HPP
