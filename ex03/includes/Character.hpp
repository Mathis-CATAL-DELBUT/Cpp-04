/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:02:43 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/23 12:54:11 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include "ICharacter.hpp"

# include <string>

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(const Character& other);
		~Character();

		Character& operator=(const Character& other);

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string name;
		AMateria* inventory[4];
		int count;
};

#endif