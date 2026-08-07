#include <iostream>

float celciusToFaranheit (float temp);
float faranheitToCelcius (float temp);

int main () {

    float temp, res, conversion;

    std::cout << "1: coversion from celcius to fahrenheit \n";
    std::cout << "2: coversion from fahrenheit to celcius \n";
    std::cout << "Select the coverversion you want to perform (1, 2):";
    std::cin >> conversion;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(conversion == 1) {
        res = celciusToFaranheit(temp);
    } else if ( conversion == 2) {
        res = faranheitToCelcius(temp);
    } else {
        std::cout << "Please enter a valid number";
        return 0;
    }

    std::cout << "The resultant temperature is: " << res;

    return 0;
};

float celciusToFaranheit (float temp) {
    return (temp*9/5) + 32;
}

float faranheitToCelcius (float temp) {
    return (temp-32)*5/9;
}