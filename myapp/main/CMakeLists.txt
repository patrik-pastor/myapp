# myapp/main/CMakeLists.txt

# build rule for executable app
add_executable(myapp
        app.cpp)

# dependencies
target_link_libraries(myapp
        gui
        model)