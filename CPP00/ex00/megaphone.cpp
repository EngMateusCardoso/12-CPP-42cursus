#include <iostream>

int main(int argc, char **argv){
	int i;
	int j;

	i = 1;
	if (argc > 1){
		while (i < argc){
			j = 0;
			while (argv[i][j]){
				std::cout << (char)std::toupper(argv[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);	
}
