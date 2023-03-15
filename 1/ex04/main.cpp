#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong numbers of arguments" << std::endl;
		return 0;
	}

	std::string dest_file_name = argv[1];
	dest_file_name += ".replace";
	std::ifstream source_file(argv[1]);

	// open or create and check if well open or create

	if (!source_file.is_open())
	{
		std::cout << "failed to open source file!" << std::endl;
		return (1);
	}

	std::ofstream dest_file(dest_file_name);

	if (!dest_file.is_open())
	{
		std::cout << "failed to create dest file!" << std::endl;
		return (1);
	}

	// copy the content of source_file to dest_file

	std::string line;
	std::string to_find = argv[2];
	std::string to_add = argv[3];
	if (!argv[2] || !argv[3])
	{
		std::cout << "PB" << std::endl;
		while (std::getline(source_file, line))
			dest_file << line << std::endl;
		return 0;
	}
	std::string	res;

	while (std::getline(source_file, line))
	{
		int i = line.find(argv[2]);
		if (i > 0)
		{
			res = line.substr(0, i);
			res = res + to_add;
			res = res + line.substr(i + to_find.size());
			dest_file << res << std::endl;
		}
		else
			dest_file << line << std::endl;
	}
	return 0;
}