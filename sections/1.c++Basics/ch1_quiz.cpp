//
// Created by James Thach on 5/30/23.
//
#include <iostream>

int main()
{
    // take input from user
    std::cout << "Enter an integer: ";
    int x{ };
    std::cin >> x;
    std::cout << "Enter another integer: ";
    int y{ };
    std::cin >> y;

    // add and subtract both numbers
    double sum = x + y;
    std::cout << x << " + " << y << " = " << sum << '\n';
    double difference = x - y;
    std::cout << x << " - " << y << " = " << difference << '\n';
    return 0;
}