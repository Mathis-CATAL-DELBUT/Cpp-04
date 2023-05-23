/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:10:50 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 19:11:40 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<
    UNDERLINE <<
    GREEN <<
    "Brain default constructor called" <<
    RESET <<
    std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout <<
    UNDERLINE <<
    RED <<
    "Brain destructor called" <<
    RESET <<
    std::endl;
}

Brain	&Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return (*this);
}

std::string		Brain::getIdea(int i) const
{
    return (this->ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}

