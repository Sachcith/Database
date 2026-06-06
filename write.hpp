#ifndef write_H
#define write_H
#include <string>
#include "fstream"
#include "record.hpp"
#include <iostream>
#include <cstdint>

class writeString{
    public:
        void write(std::ofstream& file,const std::string& str);
    private:
        
};

void writeString::write(std::ofstream& file,const std::string& str){
    uint32_t len = static_cast<uint32_t>(str.size());
    std::cout<<len<<std::endl;
    file.write(reinterpret_cast<char*>(&len),sizeof(len));
    file.write(str.data(),len);
}

#endif
