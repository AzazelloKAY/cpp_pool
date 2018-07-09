/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akokoshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:21:08 by akokoshk          #+#    #+#             */
/*   Updated: 2018/06/28 20:15:02 by akokoshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _num;
	T *_arr;

public:
	Array<T>():_num(0)
	{
		_arr = new T[0];
	}

	~Array<T>()
	{
		if (_arr != NULL)
			delete [] _arr;
		_num = 0;
	}

	Array<T>(unsigned int n):_num(n)
	{
		_arr = new T[_num];
	}

	Array<T>(Array<T> const & src)
	{
		_arr = NULL;
		*this = src;
	}

	T& operator[](unsigned int i) const
	{
		if (i < _num)
			return _arr[i];
		throw (std::exception());
	}

	Array<T> &operator=(Array<T> const & src)
	{
		if (_arr != NULL)
			delete [] _arr;
		_num = src.size();
		_arr = new T[_num];
		for (unsigned int i = 0; i < _num; i++)
			_arr[i] = src[i];
		return (*this);
	}

	unsigned int size() const
	{
		return (_num);
	}

	T *getArrPtr() const
	{
		return (_arr);
	}
};


#endif

