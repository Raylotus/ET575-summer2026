/*
Maksym Fursin
June 16, 2026
lab 15: recursive to function
*/

#include <iostream>
#include "lab16_functions_Fursin.cpp"
using namespace std;

int main(){
    // EXERCISE A 
    cout<<"\n ------ EXERCISE A ------"<<endl;
    int* ptr;          // pointer variable that can store the address of an integer
    int var = 7;       // integer variable initialized with value 7
    int foo;           // integer variable
    ptr = &var;        // store the address of var in the pointer
    ptr = &foo;        // change the pointer to store the address of foo
    int& ref = var;    // create a reference to var

    // LAB
    cout<<"\n ------ example 1 : intro to pointer ------"<<endl;
    intropointer();

    cout<<"\n ------ example 2 : checking different data ------"<<endl;
    string something = "Hellow World";
    a(something);
    cout<<something<<endl;
    b(something);
     cout<<something<<endl;
    c(&something);
     cout<<something<<endl;
    
    cout<<"\n ------ example 3 : intro to array ------"<<endl;
    introarray();    
    cout<<"\n ------ example 4 : print ------"<<endl;
    int s = 4;
    int age[s]={0};
    
    printelements(s, age);
    updatearray(s, age);
    printelements(s,age);

    int c = coutadult(s, age);
    cout<<"Adult 21+ = "<<c<<endl;

    cout<<"\n ------ EXERCISE B ------"<<endl;
    
    int array[10];
    fillArray(array);
    cout<<"Ther array contains :\t"; 
    printelements(10,array);//used function from lab example
    cout<<"Ther are "<<countEvenNumbers(array)<<" in array"<<endl;

    return 0;
}