/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:46:26 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/30 15:21:06 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->name = name;
	std::cout << "DiamondTrap : " << name << " constructor is called." << std::endl;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

void 	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void 	DiamondTrap::WhoAmI()
{
	std::cout << "My name is : " << this->name
			<< " and my ClapTrap name is : " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap : " << name << " is destroyed!" << std::endl;
}