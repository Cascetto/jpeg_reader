#include <cstdio>
#include <fstream>
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main(){
    printf("");
    std::string path = "/Users/manu/CLionProjects/jpeg_reader/images";
    for (const auto & entry : fs::directory_iterator(path)) {
        if (entry.path().extension() == ".jpeg" || entry.path().extension() == ".jpg")
            std::cout << entry.path() << std::endl;
        else std::cout << entry.path().extension() << std::endl;
        auto file = std::ifstream(entry.path());
    }

}