/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:09:27 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 12:16:50 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructeur called" << std::endl; 
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " called" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
    if(this != &other)
    {
        this->_name = other.getName();
        this->_hitPoints = other.getHitPoints();
        this->_energyPoints = other.getEnergyPoints();
        this->_attackDamage = other.getAttackDamage();
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl; 
}

std::string ClapTrap::getName(void) const
{
    return(this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return(this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)const
{
    return(this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void)const
{
   return(this->_attackDamage);
}
 
     
void ClapTrap::attack(const std::string& target)
{
    if(this->_hitPoints == 0 || this->_energyPoints == 0) 
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, he has " << _hitPoints << " points of hit and " << _energyPoints << " points of energy!" << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage and " << _energyPoints << " points of energy!" << std::endl;
    
    return; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitPoints == 0)
    {  
        std::cout << "ClapTrap " << this->_name << " can't take more damage and has been destroyed!" << std::endl;
        return;
    }
    
    if(amount >= this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage and has been destroyed!" << std::endl;
        return;
    }
    
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage and has " << _hitPoints << " points of hit!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_hitPoints == 0)
    {  
        std::cout << "ClapTrap " << this->_name << " can't be repaired because he is destroyed!" << std::endl;
        return;
    }
    if(this->_energyPoints >= 100)
    {  
        std::cout << "ClapTrap " << this->_name << " can't be repaired because his energy is full!"<< std::endl;
        return;
    }
    
    
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage, " << _hitPoints << " points of hit and " << _energyPoints << " points of energy!" << std::endl;
}
