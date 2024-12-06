/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:25:11 by rgobet            #+#    #+#             */
/*   Updated: 2024/12/06 09:13:52 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

template< typename T >
void	f1(T const &element) {
	std::cout << "In the array: " << element << std::endl;
}

template< typename T >
int	f2(T const &element) {
	static int	i = 0;
	std::cout << "In the array: " << element << std::endl;
	i++;
	return (i);
}

int	main(void) {
	int	tabi[5] = {5, 4, -8, 9, 99};
	float	tabf[5] = {42.42f, 458.5f, 58.5f, -3.01f, 0.01f};
	std::string	tabs[5] = {"j'aime", "les", "kinder", "bueno", "!"};

	std::cout << "f1 ----------------" << std::endl;

	std::cout << std::endl << "Int -------------------------" << std::endl << std::endl;
	::iter(tabi, 5, f1<int>);
	std::cout << std::endl << "String ----------------------" << std::endl << std::endl;
	::iter(tabs, 5, f1<std::string>);
	std::cout << std::endl << "Float -----------------------" << std::endl << std::endl;
	::iter(tabf, 5, f1<float>);

	// std::cout << "f2 ----------------" << std::endl;

	// std::cout << std::endl << "Int -------------------------" << std::endl << std::endl;
	// ::iter(tabi, 5, f2<int>);
	// std::cout << std::endl << "String ----------------------" << std::endl << std::endl;
	// ::iter(tabs, 5, f2<std::string>);
	// std::cout << std::endl << "Float -----------------------" << std::endl << std::endl;
	// ::iter(tabf, 5, f2<float>);
	return (0);
}