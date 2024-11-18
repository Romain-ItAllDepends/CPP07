/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:05:28 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/16 13:17:08 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T& a, T& b) {
	T	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const	&max(T const &a, T const &b) {
	return (a >= b? a : b);
}

template< typename T >
T const	&min(T const &a, T const &b) {
	return (a <= b? a : b);
}

#endif