/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:57:18 by rgobet            #+#    #+#             */
/*   Updated: 2024/12/04 11:26:15 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <iostream>

template< typename T >
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const &obj);
		~Array(void);

		unsigned int	size() const;

		Array<T>		&operator=(Array<T> const &obj);
		T				&operator[](const unsigned int size);
		const T			&operator[](const unsigned int size) const;
		
		class OutOfRangeException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

template< typename T >
std::ostream	&operator<<(std::ostream& out, const Array<T>& a);

#endif
