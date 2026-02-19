/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:08:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/19 13:57:43 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap("Clap1");
    
    Clap.attack("Clap2");
    Clap.takeDamage(2);
    Clap.beRepaired(1);

    return 0;
    
}
