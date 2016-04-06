/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   precision.cpp
 * Author: k
 *
 * Created on 6 April 2016, 5:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
double getX();
double getY();
void multXY(double x, double y);
void display_precision(double, int);
void display_precision(double, int, double, int);

/*
 * 
 */
int mainprecision(int argc, char** argv) {
    double x = getX();
    double y = getY();
    double product = x*y;
    double sum = x+y;
    cout << "Displaying x to y: ";
    display_precision(pow(x, y), 3);
    cout << "Displaying product and sum: ";
    display_precision(product, 2, sum, 4);
    return 0;
}

void display_precision(double x, int precision) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    cout << x << endl;
}

void display_precision(double x, int precision1, double y, int precision2) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision1);
    cout << x << ", ";
    cout.precision(precision2);
    cout << y << endl;
}