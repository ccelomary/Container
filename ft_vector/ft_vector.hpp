/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:26:11 by mel-omar          #+#    #+#             */
/*   Updated: 2021/11/27 17:51:43 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_HPP
# define FT_VECTOR_HPP
# include <memory>

/*

*/
namespace ft
{
	template<class Type, class Alloc=std::allocator<Type> >
	class ft_vector
	{
		public:
			using	pointer=Alloc::pointer;
			using	value_type=Alloc::value_type;
			using	const_pointer=Alloc::const_pointer;
			using	reference=Alloc::reference;
			using	const_reference=Alloc::const_reference;
			using	size_type=size_t;
			using	different_type=ptrdiff_t;
		private:
			std::allocator<Type>		_alloc;
			pointer						_darray;
			size_type					_capacity;
			size_type					_size;						
	};
};
#endif