/*
Maksym Fursin
June 10, 2026
lab 13: Introduction to function
*/


#include <iostream>
#include <string>
#include "lab13_functions_Fursin.cpp"
using namespace std;

int main(){
    cout<<"\n------ Example 1 : void function ------"<<endl;
    printhi();
    printhi();
    printhi();
    cout<<"\n------ Example 2 : void function with arguments ------"<<endl;
    greeting("Peter");
    string user = "Annie";
    greeting(user);
    cout<<"\n------ Example 3 : function with return ------"<<endl;
    int x = dbnumber(3);
    cout<<"x is "<<x<<endl;
    cout<<"\n------ Example 4 : function with return ------"<<endl;
    float a = areatectangle(2.5, 2);
    cout<<"Area of rectangle = "<<a<<endl;
    cout<<"\n------ Example 5 : function with condition return ------"<<endl;
    string r = checknumber(2);
    cout<<"int value of 2 : "<<r<<endl;
    cout<<"\n------ Example 6 : compostion of function ------"<<endl;
    int side = positiveNumber();
    int aSqare = areasqure(side);
    printResult(aSqare);
    cout<<"\n------ Example 7 : function calling function ------"<<endl;
    cout<<tripleaddition()<<endl;

    cout<<" --------- EXERCISE ---------"<<endl;
    int num = first();
    second(num);
    fourth(num);


    return 0;
}