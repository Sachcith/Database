#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "write.hpp"
#include "read.hpp"
#include "record.hpp"
using namespace std;

int main(){
    cout<<"Inside Test.cpp"<<endl;

    // ofstream writer("data1.db",ios::binary);
    // ifstream reader("data1.db",ios::binary);

    // long long x;
    // x = 20;
    // cout<<x<<endl;

    // writer.write(
    //     reinterpret_cast<char*>(&x),
    //     sizeof(x)
    // );
    // writer.flush();

    // long long y;

    // reader.read(
    //     reinterpret_cast<char*>(&y),
    //     sizeof(y)
    // );

    // cout<<y<<endl;

    // vector<int>s;
    // writeClass<int> w;

/*
    ofstream writer("data1.db",ios::binary | ios::app);
    ifstream reader("data1.db",ios::binary);

    string key = "Key Thingy";
    string value = "Value Thingy";
    cout<<"Before write and read"<<endl;
    cout<<key<<endl<<value<<endl;

    writeClass writeString;

    writeString.write(writer,key);
    writeString.write(writer,value);
    
    writer.close();

    cout<<"After write thingy"<<endl;

    readClass readString;

    auto key_thingy =  readString.read(reader);
    auto value_thingy = readString.read(reader);

    reader.close();

    cout<<"After Read thingy"<<endl;
    cout<<key_thingy<<endl<<value_thingy<<endl;
*/

    ofstream writer("data1.db",ios::binary);
    ifstream reader("data1.db",ios::binary);

    Record recordClass;

    recordClass.setKey("Name");
    recordClass.setValue("Praaneesh V");

    recordClass.disp();

    cout<<recordClass.writeRecord(writer)<<endl;
    
    recordClass.clear();

    recordClass.setKey("Name");
    recordClass.setValue("Sachcith G N");

    recordClass.disp();

    cout<<recordClass.writeRecord(writer)<<endl;
    cout<<"Write Complete!"<<endl;

    writer.close();

    recordClass.readNextRecord(reader);

    recordClass.disp();

    recordClass.readNextRecord(reader);

    recordClass.disp();

    recordClass.readNextRecord(reader);

    recordClass.disp();

    reader.close();


}