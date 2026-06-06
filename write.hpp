#ifndef write_H
#define write_H
#include <string>
#include "fstream"
#include <cstdint>

class writeClass{
    public:
        void write(std::ofstream& file,const std::string& str);
    private:
        
};

void writeClass::write(std::ofstream& file,const std::string& str){
    uint32_t len = static_cast<uint32_t>(str.size());
    file.write(reinterpret_cast<char*>(&len),sizeof(len));
    file.write(str.data(),len);
}

#endif
