
#include <myapp/gui/printer.hpp>

#include <iostream>

#include <myapp/model/user.hpp>

namespace myapp {

void Printer::PrintDefaultUser() {
    static User user("default", 30);
    std::cout << user << std::endl;
}
}