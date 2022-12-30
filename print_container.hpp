template <typename T>
void print_container(const T& container)
{
	auto it = container.cbegin();
	while (it != container.cend())
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << std::endl;
}