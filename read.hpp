#ifndef read_H
#define read_H
#include <string>
#include "fstream"
#include "record.hpp"
#include <iostream>
#include <cstdint>

class readString{
    public:
        std::string read(std::ifstream& file);
    private:
        
};

std::string readString::read(std::ifstream& file){
    uint32_t len;
    file.read(reinterpret_cast<char*>(&len),sizeof(len));
    std::cout<<len<<std::endl;
    std::string str(len,'\0');
    file.read(str.data(),len);
    return str;
}

#endif
