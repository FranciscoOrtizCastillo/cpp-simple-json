#include <iostream>
#include <fstream>
#include <string>

#include <glog/logging.h>

#include <nlohmann/json.hpp>
using json = nlohmann::json;

//using namespace std;

int main(int argc, char* argv[]) {

    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir = "./logs";

    LOG(INFO) << "===== BEGIN Test Json =====";

    std::cout << std::endl << "===== BEGIN Test Json =====" << std::endl;
   
    std::ifstream f("example.json");
    json data = json::parse(f);

    cout << data["widget"]["window"]["title"] << std::endl;

#ifndef NDEBUG
    std::cout << "Build Type: DEBUG\n";
#else
    std::cout << "Build Type: RELEASE\n";
#endif

    std::cout << "====== END Test ======" << std::endl;

    return 0;
}