//  CIS25 - assignment 4
//
//  Created by maya nachiappan on 9/15/24.
//
// a program to print a table with two columns

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // initializing column width
    const int colWidth = 12;
    cout << setw(colWidth) << left << "Course"
    << setw(colWidth) << left << "Students" << endl;
    cout << setw(colWidth) << left << "C++"
    << setw(colWidth) << right << "100" << endl;
    cout << setw(colWidth) << left << "JavaScript"
    << setw(colWidth) << right << "50" << endl;
    
    return 0;
}
