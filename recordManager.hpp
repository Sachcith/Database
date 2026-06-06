#ifndef recordManager_H
#define recordManager_H
#include "record.hpp"

class recordManager{
    private:
        Record record;
    public:
        bool create(const std::string& key,const std::string& value);
        bool read(const std::string& key,std::string& value);
};

#endif