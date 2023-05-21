/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:05:21 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/22 01:36:02 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->name = "Default";
    this->count = 0;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
    this->name = name;
    this->count = 0;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &copy)
{*this = copy;}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i])
            delete this->inventory[i];
}

Character	&Character::operator=(const Character &copy)
{
    this->name = copy.name;
    this->count = copy.count;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = copy.inventory[i];
    return (*this);
}

std::string const & Character::getName() const
{return this->name;}

void Character::equip(AMateria* m)
{
    if (this->count < 4)
    {
        this->inventory[this->count] = m;
        this->count++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->inventory[idx] = NULL;
        this->count--;
    }
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < this->count) {
		this->inventory[idx]->use(target);
	} else {
		std::cout << "can't use materia, index " << idx << " is empty" << std::endl;
	}
}
