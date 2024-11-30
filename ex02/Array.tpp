/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:12:02 by rgobet            #+#    #+#             */
/*   Updated: 2024/11/30 09:51:44 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void):_array(NULL), _size(0) {
}

template<typename T>
Array<T>::Array(unsigned int n):_size(n) {
	try {
		_array = new T[_size];
	}
	catch (std::bad_alloc ba) {
		std::cerr << "Error while allocating: " << ba.what() << std::endl;
	}
}

template< typename T >
Array<T>::~Array(void) {
	delete [] this->_array;
}

template< typename T >
Array<T>::Array(Array<T> const &obj) {
	_size = obj._size;
	if (obj._size != 0) {
		_array = new T[_size];
		for (unsigned int i = 0;i < _size;i++) {
			_array[i] = obj._array[i];
		}
	}
	else
		_array = NULL;
}

template< typename T >
unsigned int	Array<T>::size() const {
	return (_size);
}

template< typename T >
Array<T>	&Array<T>::operator=(Array<T> const &obj) {
	if (this != &obj) {
		try {
			if (_array && _size != obj._size) {
				delete [] _array;
				_size = obj._size;
				_array = new T[_size];
			}
			for (unsigned int i = 0;i < _size;i++) {
				_array[i] = obj._array[i];
			}
		}
		catch (std::bad_alloc ba) {
			std::cerr << "Error while allocating: " << ba.what() << std::endl;
		}
		for (unsigned int i = 0;i < _size;i++) {
			_array[i] = obj._array[i];
		}
	}
	return (*this);
}

template< typename T >
const char* Array<T>::OutOfRangeException::what() const throw() {
	return ("Error: Out of range.");
}

template< typename T >
T			&Array<T>::operator[](const unsigned int size) {
	if (size >= this->size()) {
		throw OutOfRangeException();
	}
	return (_array[size]);
}

template< typename T >
std::ostream &operator<<(std::ostream& out, const Array<T>& a) {
	int	i = 0;

	while (i < a.size() - 1) {
		out << a._array[i] << ", ";
		i++;
	}
	out << a._array[i] << std::endl;
    return (out);
}
