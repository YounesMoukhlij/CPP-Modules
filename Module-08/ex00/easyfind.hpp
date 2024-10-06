

#pragma once

#include <iostream>
#include <vector>
#include "easyfind.hpp"
#include <algorithm>
#include <list>
#include <deque>
#include <set>

template <typename T>
typename T::iterator easyfind(T& box, int _integer)
{
	typename T::iterator i = std::find(box.begin(), box.end(), _integer);
	return i;
}
