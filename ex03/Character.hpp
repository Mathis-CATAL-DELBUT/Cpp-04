/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:02:43 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/22 01:22:53 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include "ICharacter.hpp"

# include <string>

class Character : public ICharacter {
	public:
		Character(std::string name);
		Character(const Character& other);
		~Character();

		Character& operator=(const Character& other);

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		Character();

		static const int kInventorySize = 4;

		std::string name;
		AMateria* inventory[Character::kInventorySize];
		int count;
};

#endif