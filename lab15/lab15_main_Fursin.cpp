/*
Maksym Fursin
June 11, 2026
lab 15: Introduction to function
*/

#include <random>
#include <iostream>
#include "lab15_functions_Fursin.cpp"
using namespace std;

int main(){
    cout<<"\n------ Example 1 : recursive function ------"<<endl;
    cheers(3);

    cout<<"\n------ Example 2 : summation recursive function ------"<<endl;
    int s = summation(5);
    cout<<s<<endl;

    cout<<"\n------ Example 3 : recursive number vlaidator function ------"<<endl;
    int n = getpositive();
    cout<<"Collected number = "<<n<<endl;

    cout<<"\n------ Example 4 : recursive number vlaidator function ------"<<endl;
    int s1= getpositive();
    int s2= getpositive();
    float h = hypotenuse(s1,s2);
    printresult(s1,s2,h);
    cout<<"\n------ Example 5 : random function ------"<<endl;
    randomnumber();
    cout<<endl;
    randomnumber();
    cout<<"\n------ Example 6 : range of random functions ------"<<endl;
    int r = random_neg5_10();
    cout<<r<<endl;

    cout<<"\n------ EXERCISE ------\n"<<endl;

    int sec = randomNumber();

    float distance = fallingDistance(sec);

    outputFunction(sec, distance);


    return 0;
}