/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:08:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 12:20:34 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b(a);
    ClapTrap c("c");

    std::cout << std::endl;

    c = a;
    
    std::cout << std::endl;

    a.attack("b"); // 10 - 1 = 9
    b.takeDamage(5); //10 - 5 = 5
    b.beRepaired(3); // hp: 5 + 3 = 8  et  10 - 1 = 9   

    std::cout << std::endl;
    
    b.attack("c");
    c.takeDamage(15);
    c.beRepaired(10);

    std::cout << std::endl;

    c.attack("a");
    a.takeDamage(20);
    a.beRepaired(5);

    std::cout << std::endl;
    return 0;
}
    
