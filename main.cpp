/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nguyen tan dat
 *
 * Created on November 9, 2020, 9:13 PM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime23(int value) {
    if (value == 2 || value == 3) return true;
    if (value < 2 || value % 2 == 0 || value % 3 == 0) return false;
    int square_rootValue = (int) sqrt(value);
    for (int i = 3; i <= square_rootValue - 2; i += 6)
        if (value % (i + 2) == 0 || value % (i + 4) == 0) return false;
    return true;
}

bool isPrime235(int value) {
    if (value == 2 || value == 3 || value == 5) return true;
    if (value < 2 || value % 2 == 0 || value % 3 == 0 || value % 5 == 0) return false;
    int square_rootValue = (int) sqrt(value);
    for (int i = 5; i <= square_rootValue - 2; i += 30) {
        if (value % (i + 2) == 0)return false;
        if (value % (i + 6) == 0)return false;
        if (value % (i + 8) == 0)return false;
        if (value % (i + 12) == 0)return false;
        if (value % (i + 14) == 0)return false;
        if (value % (i + 18) == 0)return false;
        if (value % (i + 24) == 0)return false;
        if (value % (i + 26) == 0)return false;
    }
    return true;
}

int main(int argc, char** argv) {
    for (int i = 0; i < 100; i++)
        if (isPrime23(i))cout << i << " ";
    return 0;
}