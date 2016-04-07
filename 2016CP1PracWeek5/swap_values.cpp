/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   swap_values.cpp
 * Author: k
 *
 * Created on 7 April 2016, 10:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
void swap2(int&, int&);
/*
 * 
 */
int mainswap_values(int argc, char** argv) {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    swap(a, b);
    cout << "Swapped values: " << endl;
    cout << a << ", " << b << endl;
    return 0;
}

void swap2(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}