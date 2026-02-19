/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:31 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/19 12:49:41 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        
    public:
        ClapTrap();  
        ClapTrap(std::string name );  
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=( const ClapTrap& other );
        ~ClapTrap();
        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void)const;
        unsigned int getAttackDamage(void)const;
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif