/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:40:07 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/21 23:16:10 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
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
    }
    
    {
        std::cout << std::endl << GREY << "------------- Wrong Animal -------------" << RESET << std::endl << std::endl;

        const WrongAnimal *wrong = new WrongAnimal();
        const WrongAnimal *wrongCat = new WrongCat();

        std::cout << "Wrong_animal Type: " << wrongCat->getType() << " -> ";
        wrongCat->makeSound();
        wrong->makeSound();

        delete  wrong;
        delete  wrongCat;
    }
    
    {
        std::cout << std::endl << GREY << "--------------- Brain ---------------" << RESET << std::endl << std::endl;
        
        // const Animal* j = new Dog();
        // const Animal* i = new Cat();

        // delete j;
        // delete i;

        // Dog basic;
        // {
        //     Dog tmp = basic;
        // }

        // const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
        // for ( int i = 0; i < 4; i++ ) {
        //     delete animals[i];
        // }
        
	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	// TEST DEEP COPY
	std::cout << "================== TEST DEEP COPY ==================\n" << std::endl;

	cat->getBrain()->setIdea(0, "I like potatoes");
	cat->getBrain()->setIdea(1, "I like ice cream");

	std::cout << "Cat ideas:" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
	std::cout << std::endl;

	std::cout << "Create cat2" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
	Cat *cat2 = new Cat();
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 = Cat" << std::endl;
	*cat2 = *cat;
	std::cout << std::endl;

	std::cout << "Cat ideas:" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat ideas (now he hates ice cream)" << std::endl;
	cat->getBrain()->setIdea(1, "I hate ice cream");
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
	std::cout << std::endl;

	std::cout << "==================   CLEAN ALL    ==================\n" << std::endl;

	delete dog;
	delete cat2;
	delete cat;

	std::cout << std::endl;

	std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

	Animal *animals[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
    }
    
    return 0;
}