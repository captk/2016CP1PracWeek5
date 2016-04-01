/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   callByReference.cpp
 * Author: k
 *
 * Created on 1 April 2016, 9:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
void swap(int &x, int &y);
/*
 * 
 */
int mainCallByReference(int argc, char** argv) {
    int a = 100;
    int b = 200;
    cout << a << endl;
    cout << b << endl;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}
