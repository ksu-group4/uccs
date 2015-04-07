#include <iostream>
#include <string>

int main() {
    std::string line;
    while (true) {
        std::cin >> line;
		if (line == "quit" || line == "q") {
		    break;
	    }
		std::cout << line << std::endl;
    }
    std::cout << "bye!" << std::endl;
    return 0;
}