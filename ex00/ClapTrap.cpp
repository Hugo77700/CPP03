/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:34:13 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/27 01:26:45 by hugoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : s_name(name), s_hit_point(10), s_Energy_point(10), s_Attack_damage(0)
{
    std::cout<<"Player Created !"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Player Destroyed !"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!s_hit_point)
        std::cout<<"You don't have enough Life Point to repair !"<<std::endl;
    else if (!s_Energy_point)
        std::cout<<"You don't have enough Energy Point to repair !"<<std::endl;
    else
    {
        this->s_hit_point += amount;
        this->s_Energy_point--;
        std::cout<<"ClapTrap "<<s_name<<" gained "<<s_hit_point<<" of life but his Energy point is now : "<<s_Energy_point<<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    s_hit_point -= amount;
    std::cout<<s_name<<" lost "<<amount<<" of life, he has now "<<s_hit_point<<" point of life"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(target.empty())
        std::cout<<"Target is missing !"<<std::endl;
    else if (!s_hit_point)
        std::cout<<"You don't have enough Life Point to attack !"<<std::endl;
    else if (!s_Energy_point)
        std::cout<<"You don't have enough Energy Point to attack !"<<std::endl;
    else
    {
        s_Energy_point--;
        s_Attack_damage = 1;
        std::cout<<"ClapTrap "<<s_name<<" attacks "<<target<<", causing "<<s_Attack_damage<<" points of damage!"<<std::endl;
    }
}
