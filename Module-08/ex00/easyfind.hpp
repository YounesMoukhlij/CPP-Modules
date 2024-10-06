


template <typename T>
typename T::iterator easyfind(T& container, int _integer)
{
	typename T::iterator i = std::find(container.begin(), container.end(), value);
	return i;
}
