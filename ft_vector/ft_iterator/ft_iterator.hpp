#ifndef FT_ITERATOR_HPP
#define FT_ITERATOR_HPP
#include <memory>
namespace ft
{
	template<class Category, class T>
	class iterator
	{
		public:
	   		typedef T         value_type;
    		typedef ptrdiff_t  difference_type;
    		typedef T*  pointer;
    		typedef T& reference;
    		typedef Category  iterator_category;
			iterator();
			iterator(pointer v);
			iterator(const iterator & iter);
			iterator & operator=(const iterator & iter);
			bool	operator==(const iterator & rhs);
			bool	operator!=(const iterator & rhs);
			value_type 	& operator*();
			pointer		operator->();
			iterator		operator++(int);
			iterator		operator++();
			iterator		operator--(int);
			iterator		operator--();
			iterator		operator+(int n);
			template<class Cat, class Type>
			friend iterator<Cat, Type>	operator+(int n, const iterator<Cat, Type> & iter);
			difference_type	operator-(const iterator &rhs);
			iterator		operator-(int n);
			iterator & 		operator+=(int n);
			iterator &		operator-=(int n);
			value_type &	operator[](int n);
			bool			operator<(const iterator & rhs);
			bool			operator<=(const iterator & rhs);
			bool			operator>(const iterator & rhs);
			bool			operator>=(const iterator & rhs);
			~iterator();
		private:
			pointer				value;
	};

	template<class Category, class T>
	iterator<Category, T>::iterator()
	{
		value = NULL;
	}

	template<class Category, class T>
	iterator<Category, T>::iterator(pointer value)
	{
		this->value = value;
	}

	template<class Category, class T>
	iterator<Category, T>::iterator(const iterator & iter)
	{
		*this = iter;
	}

	template<class Category, class T>
	iterator<Category, T> & iterator<Category, T>::operator=(const iterator & iter)
	{
		if (this != &iter)
		{
			this->value = iter.value;
		}
		return (*this);
	}

	template<class Cat, class T>
	iterator<Cat, T>::~iterator()
	{
	}
	template<class Category, class T>
	bool		iterator<Category, T>::operator==(const iterator<Category, T> & rhs)
	{
		return (this->value == rhs.value);
	}

	template<class Category, class T>
	bool		iterator<Category, T>::operator!=(const iterator & rhs)
	{
		return (this->value != rhs.value);
	}
	template<class Cat, class T>
	typename iterator<Cat, T>::value_type	& iterator<Cat, T>::operator*()
	{
		return (*value);
	}
	template<class Cat, class T>
	typename iterator<Cat, T>::pointer		iterator<Cat, T>::operator->()
	{
		return (value);
	}

	template<class Cat, class T>
	iterator<Cat,T>		iterator<Cat,T>::operator++(int)
	{
		return (value++);
	}

	template<class Cat, class T>
	iterator<Cat, T>	iterator<Cat, T>::operator++()
	{
		return (++value);
	}
	
	template<class Cat, class T>
	iterator<Cat, T>	iterator<Cat, T>::operator--(int)
	{
		return (value--);
	}

	template<class Cat, class T>
	iterator<Cat, T>	iterator<Cat, T>::operator--()
	{
		return (--value);
	}

	template<class Cat, class T>
	iterator<Cat, T>	iterator<Cat, T>::operator+(int n)
	{
		return (value + n);
	}

	template<class Cat, class T>
	iterator<Cat, T>	operator+(int n, const iterator<Cat, T> & iter)
	{
		return (iter.value + n);
	}

	template<class Cat, class T>
	iterator<Cat, T>	iterator<Cat, T>::operator-(int n)
	{
		return (this->value - n);
	}
	template<class Cat, class T>
	typename iterator<Cat, T>::difference_type 	iterator<Cat, T>::operator-(const iterator & rhs)
	{
		return (this->value - rhs.value);
	}

	template<class Cat, class T>
	iterator<Cat, T>	& iterator<Cat, T>::operator+=(int n)
	{
		value += n;
		return (*this);
	}
	template<class Cat, class T>
	iterator<Cat, T>	& iterator<Cat, T>::operator-=(int n)
	{
		value -= n;
		return (*this);
	}
	template<class Cat, class T>
	typename iterator<Cat, T>::value_type &		iterator<Cat, T>::operator[](int n)
	{
		return (*(value + n));
	}

	template<class Cat, class T>
	bool		iterator<Cat, T>::operator<(const iterator & rhs)
	{
		return (this->value < rhs.value);
	}

	template<class Cat, class T>
	bool		iterator<Cat, T>::operator<=(const iterator & rhs)
	{
		return (this->value <= rhs.value);
	}

	template<class Cat, class T>
	bool		iterator<Cat, T>::operator>(const iterator & rhs)
	{
		return (this->value > rhs.value);
	}

	template<class Cat, class T>
	bool		iterator<Cat, T>::operator>=(const iterator & rhs)
	{
		return (this->value >= rhs.value);
	}
};

#endif