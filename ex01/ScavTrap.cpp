/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:18 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/20 14:07:47 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default")
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage= 20;
    std::cout << "ScavTrap default constructeur is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _name= name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage= 20;
    std::cout << "ScavTrap " << this->_name << " called" << std::endl; 
}

ScavTrap::ScavTrap( const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other; 
}
ScavTrap& ScavTrap::operator=( const ScavTrap& other )
{
    if( this != &other)
    {
        ClapTrap::operator=(other); //3eme affichage de l'operateur d'affectation
    }
    std::cout << "ScavTrap assignment operator called" << std::endl;
    return (*this);
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_hitPoints == 0 || this->_energyPoints == 0) 
    {
        std::cout << "ScavTrap " << this->_name << " can't attack." << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    
    return; 
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
