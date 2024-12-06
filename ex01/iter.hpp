/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:25:15 by rgobet            #+#    #+#             */
/*   Updated: 2024/12/06 09:13:56 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <stdexcept>

template< typename T, typename F >
void	iter(T &ptrArray, unsigned int size, F f) {
	try {
		for (unsigned int i = 0;i < size;i++) {
			f(ptrArray[i]);
			// std::cout << f(ptrArray[i]) << std::endl;
		}
	}
	catch (std::exception const e) {
		std::cerr << "An error occured! " << e.what() << std::endl;
	}
}

#endif