/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:50:02 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/28 22:02:19 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:
	static std::string const	DEFAULT_NAME;
	static std::string const	PREFIX;

	public:
	FragTrap(void);
	FragTrap(FragTrap const &x);
	FragTrap(std::string const &name);
	virtual ~FragTrap();

	FragTrap	&operator=(FragTrap const &x);

	public:
	void		highFiveGuys(void);

}; // class FragTrap

#endif // FRAGTRAP_HPP
