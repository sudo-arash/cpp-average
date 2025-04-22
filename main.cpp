#include <iostream>

int main() {
    int isDone = 0;
    double average = 0;  
    int count = 0;       
    int sum = 0;         
    
    do {
        std::cout << "Enter number (or enter 1337 to finish): ";
        int num = 0;
        std::cin >> num;
        
        if (num == 1337) {
            isDone = 1;
        } else {
            sum += num;
            count++;
        }
    } while (isDone == 0);

    if (count > 0) {  // Prevent division by zero
        average = static_cast<double>(sum) / count;
        std::cout << "Average: " << average << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }

    return 0;
}
