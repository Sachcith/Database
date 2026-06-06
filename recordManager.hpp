#ifndef recordManager_H
#define recordManager_H
#include <fstream>
#include "record.hpp"


class recordManager{
    private:
        Record record;
        std::ofstream writer("data1.db",ios::binary);
        std::ifstream reader("data1.db",ios::binary);
    public:
        bool create(const std::string& key,const std::string& value);
        bool read(const std::string& key,std::string& value);
        bool update(const std::string& key,const std::string& newValue);
        bool deleteRecord(const std::string& key);
};

bool recordManager::create()

#endif