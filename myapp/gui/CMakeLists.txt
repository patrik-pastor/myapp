# myapp/gui/CMakeLists.txt

#build rule for library libgui
add_library(gui
        printer.cpp)

#dependencies
target_link_libraries(gui
        model)