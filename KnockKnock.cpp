#include <iostream>

main(int argc, const char *argv[]){
	if(argc == 2){
			std::cout << "Knock. Knock. " << argv[1] <<  std::endl;
	} else {
		std::cerr << "Please Add An Argument" << std::endl;
	}
	return 0;
}
