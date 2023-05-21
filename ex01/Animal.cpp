/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:51:27 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 14:37:17 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout <<
    UNDERLINE <<
    GREEN <<
    "Animal default constructor called" <<
    RESET <<
    std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal type constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout <<
    UNDERLINE <<
    RED <<
    "Animal destructor called" <<
    RESET <<
    std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

std::string		Animal::getType() const
{
    return (this->type);
}

void	Animal::makeSound() const
{
    std::cout << "Animal sound !" << std::endl;
}