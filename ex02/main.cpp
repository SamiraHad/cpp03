/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:46 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 12:08:28 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap  frag("Frag");
    FragTrap  frag1("Frag1");
    
    std::cout << std::endl;

    frag = frag1;

    std::cout << std::endl;

    frag.attack("ennmy");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();
    
    std::cout << std::endl;

    frag1.attack("ennmy");
    frag1.takeDamage(6);
    frag1.beRepaired(3);
    frag1.highFivesGuys();
    
    std::cout << std::endl;
    
    return (0);
}