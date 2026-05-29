/*
Maksym Fursin
May 28, 2026
lab 1: iostream
*/

#include<iostream>
using namespace std;

int main(){

    cout<<"Hello World!\n"<<endl;
    cout<<"ET 575 \t\t Maksym Fursin"<<endl;
    cout<<"\n---------- Example 2: declaring string variables ----------"<<endl;

    string username;
    username = "Maksym Fursin";
    cout<<"Username = "<<username<<endl;
    cout<<"Enter another name = "<<endl;
    cin>>username;
    cout<<"Updated Username = "<<username<<endl;

    cout<<"\n---------- Example 3: declaring character variables ----------"<<endl;

    char symbol = '%';
    cout<<"Character = "<<symbol<<endl;
    symbol = 38;
    cout<<"Character = "<<symbol<<endl;

    char s(35);
    cout<<"Symbol = "<<s<<endl;

    cout<<"\n---------- EXERCISE ----------"<<endl;

    string country;
    char gender;

    cout<<"Enter the name of the country -> ";
    cin>>country;
    cout<<"Select gender -> ";
    cin>>gender;

    cout<<"Entered country:\t"<<country<<endl;
    cout<<"Selected gender:\t"<<gender<<endl;


    

    return 0;
}