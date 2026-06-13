/*
Maksym Fursin
June 12, 2026
lab 15: function calling function using AI
*/

#include <string>
#include <iostream>
#include "lab14_functions_Fursin.cpp"
using namespace std;

int main()
{
    int m1 = inputMarks();
    int m2 = inputMarks();
    int m3 = inputMarks();

    float percentage = calculatePercentage(m1, m2, m3);

    char grade = determineGrade(percentage);

    displayResult(m1, m2, m3, grade);

    return 0;
}