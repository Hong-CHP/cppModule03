/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:03:49 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/30 14:07:24 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor FragTrap : " << name << " called." << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High-fives request!!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap : " << name << " called." << std::endl;
}