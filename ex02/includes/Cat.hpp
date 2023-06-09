/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:03:12 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 22:29:21 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain	*brain;
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat	&operator=(const Cat &copy);
        void	makeSound() const;
        Brain    *getBrain() const;
};

#endif