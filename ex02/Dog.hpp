/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:14:43 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 19:05:26 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain	*brain;
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog	&operator=(const Dog &copy);
        void	makeSound() const;
        Brain    *getBrain() const;
};

#endif