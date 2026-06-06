#ifndef read_H
#define read_H
#include <string>
#include "fstream"
#include <cstdint>

class readClass{
    public:
        std::string read(std::ifstream& file);
    private:
        
};

std::string readClass::read(std::ifstream& file){
    if(file.peek()==EOF) return "EOF Thingy"; // Detects End Of File

    uint32_t len = 0;
    file.read(reinterpret_cast<char*>(&len),sizeof(len));
    std::string str(len,'\0');
    file.read(str.data(),len);
    return str;
}

#endif
