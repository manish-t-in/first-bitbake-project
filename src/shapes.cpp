#include <iostream>
#include "shapes.hpp"

void circle::printShape(){
    std::cout << "This is circle" << std::endl;
}

void square::printShape(){
    std::cout << "This is square" << std::endl;
}

void logging::l2g_logs(){

    lg2::info("Info: Phosphor logging to print info level");
    lg2::error("Error: Phosphor logging to print info level");
    lg2::warning("Warning: Phosphor logging to print info level");
    lg2::debug("Debug: Phosphor logging to print info level");
}