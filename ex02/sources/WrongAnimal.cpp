/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:27:36 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 14:48:58 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout <<
    UNDERLINE <<
    GREEN <<
    "WrongAnimal default constructor called" <<
    RESET <<
    std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<
    UNDERLINE <<
    RED <<
    "WrongAnimal destructor called" <<
    RESET <<
    std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

std::string		WrongAnimal::getType() const
{
    return (this->type);
}

void	WrongAnimal::makeSound() const
{
    std::cout <<
    YELLOW <<
    "WrongAnimal sound !" <<
    RESET <<
    std::endl;
}