/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:29:49 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 23:06:53 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();
        Brain	        &operator=(const Brain &copy);
        std::string		getIdea(int i) const;
        void	        setIdea(int i, std::string idea);
};

#endif