/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:17:03 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/25 11:24:30 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

int main (void) {
	Bureaucrat* Private = new Bureaucrat;
	Bureaucrat* Sergeant = new Bureaucrat("Sergeant", 2);
	std::cout << std::endl;
	
	Private->decrementGrade();
	Private->incrementGrade();
	std::cout << *Private;
	std::cout << std::endl;
	
	std:: cout << *Sergeant;
	Sergeant->incrementGrade();
	Sergeant->incrementGrade();
	std::cout << *Sergeant;
	std::cout << std::endl;
	
	delete Private;
	delete Sergeant;
}