/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:46 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/20 14:17:42 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Frag("Frag1");

    Frag.attack("E");
    Frag.highFivesGuys();

    
    std::cout << std::endl;
    
    
    FragTrap copy(Frag);
    copy.attack("E");
    copy.highFivesGuys();
    
    
    std::cout << std::endl;

    FragTrap Frag2("F");
    Frag2 = Frag;
    Frag2.attack("E");
    Frag2.highFivesGuys();


    return 0;
}