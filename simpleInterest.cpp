#include <iostream>

int main () {

    double principle, rate, timePeriod, result;

    std::cout << "=========================================== \n";
    std::cout<< "Please enter the principle amount: ";
    std::cin >> principle;
    std::cout<< "Please enter the rate of interest: ";
    std::cin >> rate;
    std::cout<< "Please enter the time period (in years): ";
    std::cin >> timePeriod;
    std::cout << "=========================================== \n";

    result = (principle * rate * timePeriod)/ (double) 100;
    
    std::cout << "The interest is: RS. " << result << std::endl;
    std::cout << "=========================================== \n";
    return 0;
}