/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:12 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/20 13:36:51 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scav("X");

    Scav.attack("E");
    Scav.guardGate();

    std::cout << std::endl;

    
    ScavTrap Scav2(Scav);

    Scav2.attack("E");
    Scav2.guardGate();

    std::cout << std::endl;

    ScavTrap Scav3 = Scav;
    Scav3.attack("E");
    Scav3.guardGate();

    

    return 0;
}
