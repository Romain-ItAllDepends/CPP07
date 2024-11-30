/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:25:11 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/30 09:41:33 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int	main(void) {
	int	tabi[5] = {5, 4, -8, 9, 99};
	float	tabf[5] = {42.42f, 458.5f, 58.5f, -3.01f, 0.01f};
	std::string	tabs[5] = {"j'aime", "les", "kinder", "bueno", "!"};

	std::cout << std::endl << "Int -------------------------" << std::endl << std::endl;
	f(tabi, 5, &f1);
	std::cout << std::endl << "String ----------------------" << std::endl << std::endl;
	f(tabs, 5, &f1);
	std::cout << std::endl << "Float -----------------------" << std::endl << std::endl;
	f(tabf, 5, &f1);
	return (0);
}