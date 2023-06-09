/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:11:26 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/22 13:16:15 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
		: _nLearned(0) {
	for (int i = 0; i < MateriaSource::kMateriaSize; i++) {
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MateriaSource::kMateriaSize; i++) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	this->_nLearned = other._nLearned;

	for (int i = 0; i < MateriaSource::kMateriaSize; i++) {
		if (this->_materias[i] != NULL) delete this->_materias[i];
		if (other._materias[i] != NULL) {
			this->_materias[i] = other._materias[i]->clone();
		} else {
			this->_materias[i] = NULL;
		}
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (this->_nLearned < MateriaSource::kMateriaSize) {
		this->_materias[this->_nLearned] = materia;
		this->_nLearned++;
	}
}

AMateria *MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < MateriaSource::kMateriaSize; i++) {
		if (this->_materias[i]->getType() == type) {
			return this->_materias[i]->clone();
		}
	}
	return NULL;
}
