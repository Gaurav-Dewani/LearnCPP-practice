#include <iostream> //needed for basic cout
#include <iomanip> // trying out setw()
#include <climits> // trying out char_bit
#include <cstdlib> //EXIT_SUCCESS
#include "header.h"
#define DEBUG_MODE

int main()
{
    #ifdef DEBUG_MODE
    std::cerr<<"entered main\n";
    #endif
    //to check how many bits is a byte on the device
    tellByteSize();
    /*Lets make it a little neat and tabular and put data types and their sizes using 
    setw() and sizeof()*/
    tellDataTypeSize();
    return EXIT_SUCCESS;

}

void tellByteSize()
{
    #ifdef DEBUG_MODE
    std::cerr<<"entered tellByteSize\n";
    #endif
    std::cout<<std::right<<"the number of bits in a byte in your device is "<<CHAR_BIT<<"\n";

}

void tellDataTypeSize()
{
    #ifdef DEBUG_MODE
    std::cerr<<"entered tellDataTypeSize\n";
    #endif
    std::cout<<std::left;

    std::cout << std::setw(1) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(2) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(4) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(8) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

}