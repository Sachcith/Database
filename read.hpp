#ifndef read_H
#define read_H
#include <string>
#include "fstream"
#include "record.hpp"
#include <iostream>

class readString{
    public:
        std::string read(std::ifstream& file);
    private:
        
};

std::string readString::read(std::ifstream& file){
    std::size_t len;
    file.read(reinterpret_cast<char*>(&len),sizeof(len));
    std::cout<<len<<std::endl;
    std::string str(len,'\0');
    file.read(str.data(),len);
    return str;
}

#endif
