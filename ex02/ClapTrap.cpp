/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:46:57 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/30 11:51:15 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " is destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " has no energy or hit points left to attack!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << name << " attacks " << target << ", causing "
				<< attackDamage << " point of Damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
    std::cout << name << " takes " << amount << " points of damage! "
              << "Remaining : " << hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " cannot repair anymore!" << std::endl;
		return ;
	}
	hitPoints+=amount;
	energyPoints--;
    std::cout << name << " repairs itself, recovering " << amount
              << " hit points! Remaining : " << hitPoints
              << ", Energy: " << energyPoints << std::endl;
}