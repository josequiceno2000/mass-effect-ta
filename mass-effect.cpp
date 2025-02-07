#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Welcome Message
    std::ifstream file("ascii-art/title-card.txt"); 
    std::string line;

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();


    std::cout << "Welcome to the Mass Effect Text Adventure.\n";
    std::cout << "To quit at any time, simply type 'q' (lowercase).\n";

    std::string user_input;
    std::cin >> user_input;

    // User quitting condition
    if (user_input == "q") {
        std::ifstream file("ascii-art/farewell.txt"); 
        std::string line;

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

    file.close();

        return 0;
    }

    
}