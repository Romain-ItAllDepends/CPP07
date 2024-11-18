/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:57:18 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 09:47:19 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>

template< typename T >
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array(void);
		Array(Array const &obj);
		~Array(void);

		Array<T>	&operator=(Array const &obj);
};

# include "Array.tpp"

#endif