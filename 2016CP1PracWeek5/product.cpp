/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   product.cpp
 * Author: k
 *
 * Created on 1 April 2016, 9:23 PM
 */

#include <cstdlib>

using namespace std;
double getX();
double getY();
double multXY(double x, double y);
/*
 * 
 */
int mainProduct(int argc, char** argv) {
    getX();
    getY();
    multXY();
    return 0;
}

double getX(){
    double x;
    cout << "Enter value for x: ";
    cin >> x;
    cout << endl;
    return x;
}
