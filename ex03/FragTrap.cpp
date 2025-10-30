/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:03:49 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/30 15:15:52 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor n2 FragTrap is called : " << name << " is created." << std::endl;
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
	std::cout << "Destructor n2 FragTrap : " << name << " called." << std::endl;
}