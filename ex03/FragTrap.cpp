/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:34 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/19 13:50:29 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _name = "Default";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    
    std::cout << "FragTrap " << _name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " called" << std::endl;
}
FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other)
{
    *this = other;

    std::cout << "FragTrap copy constructor called" << std::endl; 
}
FragTrap& FragTrap::operator=( const FragTrap& other )
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    
    std::cout << "FragTrap assignment operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high-fives!" << std::endl;
}