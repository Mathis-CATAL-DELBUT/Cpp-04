/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:01:11 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/22 01:28:14 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()    {}

AMateria::AMateria(std::string const & type)
{this->type = type;}

AMateria::AMateria(const AMateria &copy)
{*this = copy;}

AMateria::~AMateria()   {}

AMateria	&AMateria::operator=(const AMateria &copy)
{
    this->type = copy.type;
    return (*this);
}

std::string const & AMateria::getType() const
{return this->type;}

void AMateria::use(ICharacter& target)
{
    std::cout <<
    UNDERLINE <<
    YELLOW <<
    "* shoots an ice bolt at " <<
    target.getName() <<
    " *$" <<
    RESET <<
    std::endl;
}