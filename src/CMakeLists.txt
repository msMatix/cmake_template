add_subdirectory(modul1)
add_subdirectory(modul2)

add_executable(my_program main.cpp modul1/foo.cpp modul2/bar.cpp)

target_link_libraries(my_program etl)
