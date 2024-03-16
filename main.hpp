#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int writeFile() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    ofstream outFile("employee.txt");
    if(!outFile) {
        cerr << "ERROR OPENING FILE." <, endl;
    }

    int id;
}