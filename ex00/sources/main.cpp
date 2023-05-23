/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:40:07 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/22 14:47:26 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    std::cout << GREY << "--------------- Animal ---------------" << RESET << std::endl << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << BLUE << "J Type: " << j->getType() << " -> ";
    j->makeSound();
    std::cout << CYAN << "I Type: " << i->getType() << " -> ";
    i->makeSound();
    std::cout << RESET << "Other Type: " << " -> ";
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << GREY << "------------- Wrong Animal -------------" << RESET << std::endl << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong_animal Type: " << wrongCat->getType() << " -> ";
    wrongCat->makeSound();
    wrong->makeSound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}