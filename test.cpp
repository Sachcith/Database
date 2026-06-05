#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "write.hpp"
#include "read.hpp"
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
    // writeString<int> w;


    ofstream writer("data1.db",ios::binary);
    ifstream reader("data1.db",ios::binary);

    string key = "Key Thingy";
    string value = "Value Thingy";
    cout<<"Before write and read"<<endl;
    cout<<key<<endl<<value<<endl;

    writeString writeClass;

    writeClass.write(writer,key);
    writeClass.write(writer,value);
    
    writer.close();

    cout<<"After write thingy"<<endl;

    readString readClass;

    auto key_thingy =  readClass.read(reader);
    auto value_thingy = readClass.read(reader);

    reader.close();

    cout<<"After Read thingy"<<endl;
    cout<<key_thingy<<endl<<value_thingy<<endl;



}