#ifndef myapp_model_user_hpp_
#define myapp_model_user_hpp_

#include <string>
#include <ostream>

namespace myapp {

class User {
public:
    User(std::string const& name, int age);

    friend std::ostream& operator<<(std::ostream& os, User const& user);

private:
    std::string name_;
    int age_;
};

}

#endif