/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   delta.cpp
 * Author: k
 *
 * Created on 7 April 2016, 10:46 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
double delta(double&,double&,double&);
void get_coeff(double&,double&,double&);
/*
 * 
 */
int main(int argc, char** argv) {
    double a, b, c;
    double del = delta(a, b, c);
    cout << "Delta = " << del;
    return 0;
}

double delta(double& a, double& b, double& c) {
    get_coeff(a, b, c);
    return b * b - 4 * a*c;
}

void get_coeff(double& a, double& b, double& c){
    cout << "Enter coefficients a, b,c: ";
    cin >> a >> b >> c;
    return;
}