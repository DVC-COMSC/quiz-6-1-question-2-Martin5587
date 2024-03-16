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
        cerr << "ERROR OPENING FILE." << endl;
    }

    int id;
    string name, department;
    double salary;

    cout << "Enter employee information: (ID, Name, Department, Salary):" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cin >> id >> name >> department >> salary;
        outFile << id << " " << name << " " << department << " " << salary << endl;
    }
    outFile.close();
    return numEmployees;
}

int readFile() {
    ifstream inFile("Employee.txt");
    if (!inFile) {
        cerr << " ERROR OPENING FILE." << endl;
    }
    int empId;
    string name, department;
    int numEmployees = 0;

    cout << "Employee Information: " << endl;
    while (inFile >> empId >> name >> department >> salary) {
        cout << "Employee ID: " << empId << ", Name: " << name << ", Department: " << department << ", Salary: " << salary << endl;
        numEmployees++;
    }
    inFile.close();
    return numEmployees;
}

#endif