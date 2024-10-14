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
    const int colWidth = 12; // sets the column width to 12 units
    cout << setw(colWidth) << left << "Course" // the column is left aligned
    << setw(colWidth) << left << "Students" << endl; // the column is left aligned
    cout << setw(colWidth) << left << "C++" // the column is left aligned
    << setw(colWidth) << right << "100" << endl; // the column is right aligned
    cout << setw(colWidth) << left << "JavaScript" // the column is left aligned
    << setw(colWidth) << right << "50" << endl; // the column is right aligned
    
    return 0;
}
