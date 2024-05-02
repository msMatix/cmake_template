include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip)
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SRC_FILES "${CMAKE_SOURCE_DIR}/src/modul1/*.cpp"
     "${CMAKE_SOURCE_DIR}/src/modul2/*.cpp")

add_executable(my_test test_main.cpp test_foo.cpp test_bar.cpp ${SRC_FILES})
target_link_libraries(my_test gtest_main)

include(GoogleTest)
gtest_discover_tests(my_test)
