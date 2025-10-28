/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:05:19 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/28 18:01:27 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Boule");
	while (1)
	{
		if (a.getEnergy() <= 0 || a.getHealth() <= 0)
		{
			std::cout << "Has no energy or hit points left to attack!" << std::endl;	
			break ;
		}
		a.attack("Cacathuetes");
		a.takeDamage(2);
		a.beRepaired(1);
	}
	return (0);
}