#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("ascii-art/alliance-logo.txt"); 
    std::string line;

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();

    return 0;
}