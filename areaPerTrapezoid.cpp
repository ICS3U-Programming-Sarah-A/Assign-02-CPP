// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Mar. 25, 2022
// This program asks the user for the bases and side lengths
// of a rectangle. It then calculates
// and displays the area and perimeter.

#include <iostream>
#include <cmath>
#include <iomanip>
// declare variables
float height, base1, base2, side_c, side_d, area, perimeter;


int main() {
  // get input from user
  std::cout << "Today we will calculate the area and\n";
  std::cout << "perimeter of a trapezoid.\n";
  std::cout << "Enter base-1 of the trapezoid (cm): ";
  std::cin >> base1;
  std::cout << "Enter base2 of the trapezoid (cm): ";
  std::cin >> base2;
  std::cout << "Enter the height of the trapezoid (cm): ";
  std::cin >> height;
  

  // calculate area of the trapezoid
  area = height * (base1 + base2)/2;

  // display area to user
  std::cout << std::endl;
  std::cout << "\033[1;34mArea = " << area <<" cm^2.\n";

  std::cout << std::endl;

  // get user input from user
  std::cout << "\033[1;35mEnter side length C of the trapezoid (cm): ";
  std::cin >> side_c;
  std::cout << "\033[1;35mEnter side length D of the trapezoid (cm): ";
  std::cin >> side_d;

  // caulcate perimeter of the trapezoid
  perimeter = base1 + base2 + side_c + side_d;

  // display results to user
  std::cout << std::endl;
  std::cout << "\033[1;36mPerimeter = " << perimeter <<" cm.\n";
}

