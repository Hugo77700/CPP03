/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:07:06 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/27 18:10:44 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout<<"DiamondTrap : Constructor Called !"<<std::endl;
	s_hit_point = 100;
	s_Energy_point = 50;
	s_Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout<<"DiamondTrap : String Constructor Called !"<<std::endl;
	s_hit_point = 100;
	s_Energy_point = 50;
	s_Attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy)
{
    std::cout << "DiamondTrap : Copy Constructor Called !" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap : Destructor Called !"<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &cpy)
{
	if (this == &cpy)
		return (*this);
	s_name = cpy.s_name;
    s_hit_point = cpy.s_hit_point;
    s_Energy_point = cpy.s_Energy_point;
    s_Attack_damage = cpy.s_Attack_damage;
    return (*this);
}