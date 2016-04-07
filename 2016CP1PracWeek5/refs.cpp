/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   refs.cpp
 * Author: k
 *
 * Created on 7 April 2016, 9:51 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
// This is the declaration for the function that reads the values for i and j 
void get_input(int& i, int& j);
// This is the declaration for the function that adds 10 to i and 20 to j 
void process(int& i, int& j);

int mainrefs() {
    int i, j;
    get_input(i, j);
    cout << "I am about to call function process() i = " << i << " j = " << j << endl;
    process(i, j);
    cout << "I just came back from function process(), i = " << i << " j = " << j << endl;
    cout << "Done" << endl;
    return 0;
}

void get_input(int& i, int& j) {
    cout << "Please enter two values for i and j separated by a single space, then press <Enter>:";
    cin >> i >> j;
    cout << endl;
}

void process(int& i, int& j) {
    i = i + 10;
    j = j + 20;
    cout << "Inside function process() \n";
    cout << "I added 10 to i, and 20 to j, i = " << i << " and j = " << j << "\n";
} 