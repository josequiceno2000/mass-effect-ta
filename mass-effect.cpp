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

    // Chapter 0 
    std::cout << "\n[CHAPTER 0: MASS EFFECT]\n"
    "\nIn the year 2148, explorers on Mars discovered the remains of an ancient spacefaring civilization. In the \n" 
    "decades that followed, these mysterious artifacts revealed startling new technologies, enabling travel \n" 
    "to the furthest stars. The basis for this incredible technology was a force that \n" 
    "controlled the very fabric of space and time.\n"
    "\n"
    "They called it the greatest discovery in human history.\n"
    "\n"
    "The civilizations of the galaxy call it... MASS EFFECT.\n\n";

    return 0;

    
}