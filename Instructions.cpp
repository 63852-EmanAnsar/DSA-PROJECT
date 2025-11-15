#include <iostream>

void showInstructions() {
    std::cout << "=======================================" << std::endl;
    std::cout << "         WELCOME TO THE GAME!          " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "Instructions:" << std::endl;
    std::cout << "1. You will be asked questions one by one." << std::endl;
    std::cout << "2. Type your answer and press Enter." << std::endl;
    std::cout << "3. To exit the current level, type 'exit'." << std::endl;
    std::cout << "4. To quit the entire game, type 'quit'." << std::endl;
    std::cout << "5. Your final score will be shown at the end." << std::endl;
    std::cout << "=======================================" << std::endl;
}
int main() {
    showInstructions();
    return 0;
}
