#include <iostream>
#include <string>
#include <vector>
#include <map>


void handle_command(std::string line);
void handle_command(std::string line) {

}

int main() {
    std::string line;
    while (true) {
        std::cin >> line;
		if (line == "quit" || line == "q") {
		    break;
	    }
		handle_command(line);
    }
    std::cout << "bye!" << std::endl;
    return 0;
}