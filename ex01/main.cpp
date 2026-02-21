/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:12 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 12:19:44 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1("s1");
    ScavTrap s2("s2");
    
    std::cout << std::endl;

    s2 = s1;
    
    std::cout << std::endl;

    s1.attack("ennmy");
    s1.takeDamage(20);
    s1.beRepaired(10);
    s1.guardGate();
    
    std::cout << std::endl;


    s2.attack("ennmy1");
    s2.takeDamage(15);
    s2.beRepaired(5);
    s2.guardGate();
    
    std::cout << std::endl;
    
    return 0;
}
