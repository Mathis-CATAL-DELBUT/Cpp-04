/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:28:31 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 15:15:12 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout <<
    UNDERLINE <<
    GREEN <<
    "WrongCat default constructor called" <<
    RESET <<
    std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout <<
    UNDERLINE <<
    RED <<
    "WrongCat destructor called" <<
    RESET <<
    std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

void	WrongCat::makeSound() const
{
    std::cout <<
    MAGENTA <<
    "Wouafff !" <<
    RESET <<
    std::endl;
}