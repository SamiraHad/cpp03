/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:08:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/20 13:30:28 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap original("o");
    
    original.attack("E");
    original.takeDamage(100);
    original.beRepaired(10);
    
    
    std::cout << std::endl;

    
    ClapTrap copy(original);
    
    copy.attack("E");
    copy.takeDamage(2);
    copy.beRepaired(1);

    
    std::cout << std::endl;


    ClapTrap c2("2");
    ClapTrap c3("3");

    c3 = c2;
    c3.attack("E");
    c3.takeDamage(60);
    c3.beRepaired(4);
    
    
    std::cout << std::endl;

    return 0;
    
}
