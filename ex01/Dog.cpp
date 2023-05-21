/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:39:40 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 19:05:32 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout <<
    UNDERLINE <<
    GREEN <<
    "Dog default constructor called" << 
    RESET <<
    std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout <<"Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout <<
    UNDERLINE <<
    RED <<
    "Dog destructor called" <<
    RESET <<
    std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    return (*this);
}

void	Dog::makeSound() const
{
    std::cout << 
    BLUE <<
    "Wouafff !" << 
    RESET <<    
    std::endl;
}

Brain	*Dog::getBrain() const
{
    return (this->brain);
}