/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:05:19 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/30 16:52:09 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap a("Boule");
	// while (1)
	// {
	// 	if (a.getEnergy() <= 0 || a.getHealth() <= 0)
	// 	{
	// 		std::cout << "Has no energy or hit points left to attack!" << std::endl;	
	// 		break ;
	// 	}
	// 	a.attack("Cacathuetes");
	// 	a.takeDamage(2);
	// 	a.beRepaired(1);
	// }
	ScavTrap b("robot");
	std::cout << b.getHealth() << std::endl;
	b.guardGate();
	while (1)
	{
		if (b.getEnergy() <= 0 || b.getHealth() <= 0)
		{
			std::cout << "Has no energy or hit points left to attack!" << std::endl;	
			break ;
		}
		b.attack("Cacathuetes");
		b.takeDamage(2);
		b.beRepaired(1);
	}
	return (0);
}