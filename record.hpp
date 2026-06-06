#ifndef record_H
#define record_H
#include <string>
#include "write.hpp"
#include "read.hpp"
#include <iostream>

class Record{
    private:
        std::string key;
        std::string value;
        bool keyEmpty = true;
        bool valueEmpty = true;
        writeClass writeString;
        readClass readString;
    public:
        const std::string getKey();
        const std::string getValue();

        void setKey(const std::string& KEY);
        void setValue(const std::string& VALUE);

        bool writeRecord(std::ofstream& file);
        bool readNextRecord(std::ifstream& file);

        void clear();
        void disp();
};

const std::string Record::getKey(){
    return key;
}

const std::string Record::getValue(){
    return value;
}

void Record::setKey(const std::string& KEY){
    key = KEY;
    keyEmpty = false;
}

void Record::setValue(const std::string& VALUE){
    value = VALUE;
    valueEmpty = false;
}

bool Record::writeRecord(std::ofstream& file){
    if(keyEmpty || valueEmpty) return false;
    writeString.write(file,key);
    writeString.write(file,value);
    return true;
}

bool Record::readNextRecord(std::ifstream& file){
    key = readString.read(file);
    value = readString.read(file);
    return true;
}

void Record::clear(){
    key = "";
    keyEmpty = true;

    value = "";
    valueEmpty = true;
}

void Record::disp(){
    std::cout<<"{"<<std::endl;
    std::cout<<"    "<<"Key: "<<key<<std::endl;
    std::cout<<"    "<<"Value: "<<value<<std::endl;
    std::cout<<"}"<<std::endl<<std::endl;
}


#endif