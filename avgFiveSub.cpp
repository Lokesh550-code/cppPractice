#include <iostream>

int main () {
    float marks[5] = {1, 3, 4, 5}, sum, avg;

    for(int i = 0; i < 5; i++) {
        std::cout << "Enter the marks of subject number " << i+1 << ": ";
        std::cin >> marks[i];

        if(marks[i] < 0 || marks[i] > 100) {
            std::cout << "Please enter marks between 0 and 100" << std::endl;
            return 0;
        }
        
        sum += marks[i];
    }

    avg = sum/ (float) 5;



    return 0;
}