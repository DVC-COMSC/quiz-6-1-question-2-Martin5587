#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int writeFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "ERROR opening file" << endl;
    }

    int numEmployees = 3
}