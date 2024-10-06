

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


# define IGNORE(param) (void)(param)

template <typename T>
typename T::iterator easyfind(T& box, int _integer)
{
	typename T::iterator i = std::find(box.begin(), box.end(), _integer);
	return i;
}

std::ostream& operator<<(std::ostream& file, std::vector<int> v)
{
    file << v;
    return file;
}
