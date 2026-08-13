#include <iostream>

int main () {
    int weekday;

    std::cout << "Enter a number (between 1 to 7): ";
    std::cin >> weekday;

    switch(weekday) {
        case 1: 
            std::cout << "Monday \n";
            break;
        case 2: 
            std::cout << "Tuesday \n";
            break;
        case 3: 
            std::cout << "Wednesday \n";
            break;
        case 4: 
            std::cout << "Thursday \n";
            break;
        case 5: 
            std::cout << "Friday \n";
            break;
        case 6: 
            std::cout << "Saturday \n";
            break;
        case 7: 
            std::cout << "Sunday \n";
            break;
        default:
            std::cout << "Enter a number betweeen 1 to 7 \n";
            break;
    }

    return 0;
}