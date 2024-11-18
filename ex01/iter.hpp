/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:25:15 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/16 15:31:47 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <stdexcept>

template< typename T >
void	f1(T const &element) {
	std::cout << "In the array: " << *element << std::endl;
}

template< typename T >
void	f(T ptrArray, unsigned int size, void (*f1)(T const &)) {
	try {
		for (unsigned int i = 0;i < size;i++) {
			f1(&ptrArray[i]);
		}
	}
	catch (std::exception const e) {
		std::cerr << "An error occured! " << e.what() << std::endl;
	}
}

#endif