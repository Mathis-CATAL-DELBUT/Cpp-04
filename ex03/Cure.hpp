/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:06:51 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/22 01:19:27 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
# define CURE_HPP_

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& other);
		~Cure();

		Cure& operator=(const Cure& other);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif