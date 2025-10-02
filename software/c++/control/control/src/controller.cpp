#include "controller.h"
#include <iostream>

controller::controller() {
    std::cout << "controller constructed." << std::endl;
}

controller::~controller() {
    std::cout << "controller destructed." << std::endl;
}

void controller::echo(const std::string& message) const {
    std::cout << "Echo: " << message << std::endl;
}
