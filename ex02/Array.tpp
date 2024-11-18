/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:12:02 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/18 09:47:27 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void):_array(NULL), _size(0) {
}

// template< typename T >
// Array<T>::~Array(void) {
// }

// template< typename T >
// Array<T>::Array(Array const &obj) {
// 	*this = obj;
// }

// template< typename T >
// Array	&Array<T>::operator=(Array const &obj) {
// 	(void)obj;
// 	return (*this);
// }
