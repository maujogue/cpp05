/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:20:39 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/25 11:28:41 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ) : _name("Ryan"), _grade(150){
	std::cout << "Created Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name), _grade(grade) {
	std::cout << "Created Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat ( Bureaucrat const & src) : _name(src._name), _grade(src._grade){
	std::cout << "Created Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & src) {
	this->_grade = src._grade;
	std::cout << "Assigned Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const & src){
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destroyed Bureaucrat " << this->_name << std::endl;
}


void	Bureaucrat::incrementGrade( void ){
	try {
		if (this->_grade > 1)
		{
			this->_grade--;
			std::cout << "Decremented " << this->_name << "'s grade to " << this->_grade << std::endl;
		}
		else
			throw std::range_error("Highest grade possible!");
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade( void ){
	try {
		if (this->_grade < 150)
		{
			this->_grade++;
			std::cout << "Incremented " << this->_name << "'s grade to " << this->_grade << std::endl;
		}
		else
			throw std::range_error("Lowest grade possible!");
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

const std::string &Bureaucrat::getName( void ) const {
	return (this->_name);
}

unsigned int Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}