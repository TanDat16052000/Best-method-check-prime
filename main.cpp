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

bool isPrime(int value) {
    if (value == 2 || value == 3) return true;
    if (value < 2 || value % 2 == 0 || value % 3 == 0) return false;
    int square_rootValue = (int) sqrt(value);
    for (int i = 3; i <= square_rootValue - 2; i += 6)
        if (value % (i + 2) == 0 || value % (i + 4) == 0) return false;
    return true;
}

int main(int argc, char** argv) {
    for (int i = 0; i < 100; i++)
        if (isPrime(i))cout << i << " ";
    return 0;
}