//
// Created by xuejun on 19-1-8.
//
#include <iostream>
#include <typeinfo>
#include "data-type-int.h"

void print_data_type_int(){
    int a =1;
    std::cout << "the type of int: " << typeid(a).name() << std::endl;
    std::cout << "the size of int: " << sizeof(a) << std::endl;
}

void print_data_type_int_16(){
    int8_t a;
    std::cout << "the type of int16: " << typeid(a).name() << std::endl;
    std::cout << "the size of int16: " << sizeof(a) << std::endl;
}