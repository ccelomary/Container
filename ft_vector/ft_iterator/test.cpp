#include <iostream>
#include <iterator>
#include "ft_iterator.hpp"
#include <vector>
#include <cstring>

int		main(void)
{
	int arr[] = {10, 20, 30, 40};
	std::vector<int> vect = {10, 20, 30, 40};
	std::vector<int>::iterator vt = vect.begin();
	ft::iterator<std::random_access_iterator_tag, int> t(arr);
	ft::iterator<std::random_access_iterator_tag, int> b = t + 2;
	std::cout << (b < t) << std::endl;
	return (0);	
}