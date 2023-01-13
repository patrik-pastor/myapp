#include <myapp/model/user.hpp>

#include <ostream>

namespace myapp {


User::User(std::string const& name, int age) : name_(name), age_(age) {}

std::ostream& operator<<(std::ostream& os, User const& user) {
    os << "name_: " << user.name_ << " age_: " << user.age_;
    return os;
}
}