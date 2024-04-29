#ifndef ARRAY_H
#define ARRAY_H
#include <bits/c++config.h>
#include <cstddef>
#include <iostream>

using namespace std;


template <typename T>

size_t Size(T Array[]){
    size_t size = 0;
    while(!Array[size] == NULL)
        size++;
    return size;
}

template <typename T>

void Display(T Array[] , char Spliter = ' , '){
    const unsigned int size = Size(Array);
    cout << Array[0];
    for(unsigned int i = 1 ; i < size ; ++i)\
        cout << Spliter << Array[i];
}

template <typename T>

void Display(T Array[][] , int size1 , int size2 = size1 , string Spliter = ' , '){
    cout << Array[0];
    for(unsigned int i = 1 ; i < size1 ; ++i)|{
        for(unsigned int j = 0 ; j < size2 ; ++j)
            cout << Spliter << Array[i];
        cout << endl;
    }
}

#endif
