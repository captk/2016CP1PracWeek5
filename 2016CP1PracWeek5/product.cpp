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
#include <iostream>

using namespace std;
double getX();
double getY();
void multXY(double x, double y);
/*
 * 
 */
int mainproduct(int argc, char** argv) {
    double x, y;
    x = getX();
    y = getY();
    multXY(x, y);
    return 0;
}

double getX(){
    double x;
    cout << "Enter value for x: ";
    cin >> x;
    cout << endl;
    return x;
}

double getY(){
    double x;
    cout << "Enter value for y: ";
    cin >> x;
    cout << endl;
    return x;
}

void multXY(double x, double y){
    cout << x*y;
    
}