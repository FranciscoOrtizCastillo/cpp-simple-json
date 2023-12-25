cmake_minimum_required(VERSION 3.27)
project(simple-json
        VERSION       0.0.1
        LANGUAGES     C  CXX
)

find_package(nlohmann_json REQUIRED)
find_package (glog 0.6.0 REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)
target_link_libraries (${PROJECT_NAME} glog::glog)

file(COPY 
     example.json 
     DESTINATION ${CMAKE_BINARY_DIR}
)