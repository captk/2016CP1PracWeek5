/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   shapes.cpp
 * Author: k
 *
 * Created on 7 April 2016, 10:51 PM
 */

#include <cstdlib>

#include <iostream>
using namespace std;
void draw_triangle(int size, char c);
void draw_shape(int);
void instructions();
void menu();
int get_size();
char get_char();
void draw_bottom(int size, char c);
;
void draw_diamond(int size, char c);

int main() { // Simplified version of main, notice that char and size are fixed for now char 

    instructions();
    menu();

    return 0;
}

void menu() {
    int c;
    cout << "What shape do you want to draw: enter 1 for a triangle, 2 for a "
            << "diamond: ";
    cin >> c;
    if (c != 1 && c != 2) {
        cout << "You requested to quit, bye \n";
        return;
    }
    draw_shape(c);
}

void draw_shape(int choice) //A simplified version of draw shape 
{
    int size;
    char c;
    cout << "What size do you want? ";
    cin >> size;
    cout << "What character do you want? ";
    cin >> c;
    if (choice == 1) {
        draw_triangle(size, c);
    } else {
        draw_diamond(size, c);
    }
}

//draw the triangle on top. uses clever for loops.
void draw_triangle(int size, char c) { // complete version of draw triangle function
    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i - 1; k++) {
            cout << c;
        }
        cout << endl;
    }
}

void draw_diamond(int size, char c) {
    draw_triangle(size, c);
    draw_bottom(size, c);
}

void draw_bottom(int size, char c) {
    for (int i = size -1; i > 0; i--) {
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i -1; k++) {
            cout << c;
        }
        cout << endl;
    }
}

void instructions() {
    cout << "The program draws shapes: triangle or a diamond" << endl;
    cout << "User specifies the size and character to use for drawing." << endl;
}

char get_char() {
    char in;
    cin >> in;
    return in;
}

int get_int() {
    int in;
    cin >> in;
    return in;
}