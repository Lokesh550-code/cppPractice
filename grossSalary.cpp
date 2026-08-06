#include <iostream>

int main () {

    double basePay, allowance, bonus, grossSalary;
    
    std::cout << "=========================================================== \n";
    std::cout << "Enter you monthly base pay: ";
    std::cin >> basePay;
    std::cout << "Enter your monthly allowances (rent, travel, etc): ";
    std::cin >> allowance;
    std::cout << "Enter any bonusses as well as overtime: ";
    std::cin >> bonus;
    std::cout << "=========================================================== \n"; 
    grossSalary = basePay + allowance + bonus;
    std::cout << "your gross salary is RS. " << grossSalary << std::endl; 
    std::cout << "=========================================================== \n";
    return 0;
}