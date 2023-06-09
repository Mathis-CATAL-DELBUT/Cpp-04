/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:05:48 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 15:14:53 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout <<
    UNDERLINE <<
    GREEN <<
    "Cat default constructor called" << 
    RESET <<
    std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << 
    UNDERLINE <<
    RED <<
    "Cat destructor called" << 
    RESET << 
    std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

void	Cat::makeSound() const
{
    std::cout << 
    CYAN <<
    "Miaouuuuuuuuu !" << 
    RESET <<
    std::endl;
}