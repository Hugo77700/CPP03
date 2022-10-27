/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:07:27 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/27 18:21:26 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &cpy);
	~DiamondTrap();
	
	DiamondTrap&	operator=(DiamondTrap const &cpy);

    void	whoAmI();
	void	attack(const std::string& target);
    private :

	std::string	s_name;

};

#endif