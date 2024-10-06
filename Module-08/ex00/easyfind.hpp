


template <typename T>
typename T::iterator easyfind(T& boc, int _integer)
{
	typename T::iterator i = std::find(boc.begin(), boc.end(), _integer);
	return i;
}
