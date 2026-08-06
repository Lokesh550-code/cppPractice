#include <iostream>

int main () {

    std::string name, abbriv;
    bool newWord = true;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    for(char c : name) {
        if(c != ' ' && newWord) {
            abbriv = abbriv +  c + ".";
            newWord = false;
        } 

        if(c == ' ') {
            newWord  = true;
        }
    }

    std::cout << "The abbrivation is: " << abbriv;

    return 0;
}

// Asked AI to help with this one. My approach was completely wrong :/
// I was trying to use an array which was empty. The size of the array was zero and trying to dynamically at runtime created a segmentaion fault.