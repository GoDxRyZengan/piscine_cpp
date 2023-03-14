#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong numbers of arguments" << std::endl;
		return 0;
	}

	// open and create file

	std::string source_file_name = argv[1];
	source_file_name += ".replace";
	std::ifstream source_file(argv[1]);
	std::ofstream dest_file(source_file_name);

	// check if well open or create

	if (!source_file.is_open())
	{
		std::cout << "failed to open source file!" << std::endl;
		return (1);
	}
	if (!dest_file.is_open())
	{
		std::cout << "failed to create dest file!" << std::endl;
		return (1);
	}

	// copy the content of source_file to dest_file

	std::string line;
	while (std::getline(source_file, line))
	{
		int res = line.find(argv[2]);
		if (res > 0)
		{
			std::cout << line << std::endl;
			int i = line.size();
			dest_file << line << std::endl;
		}
		else
			dest_file << line << std::endl;
	}
	return 0;
}