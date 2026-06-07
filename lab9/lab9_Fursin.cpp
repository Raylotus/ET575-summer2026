/*
Maksym Fursin
June 4, 2026
lab 9: swithc case statement
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ----- example 1 : switch case statement ----- "<<endl;

    int dayoff=0;

    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;

    cin>>dayoff;

    switch (dayoff){
    case 1:
        cout<<"You are off on Monday"<<endl;
        break;
    case 2:
        cout<<"You are off on Tuesday"<<endl;
        break;
     case 3:
        cout<<"You are off on Wednesday"<<endl;
        break;
     case 4:
        cout<<"You are off on Thursday"<<endl;
        break;
     case 5:
        cout<<"You are off on Friday"<<endl;
        break;
    default:
        cout<<"Wrong day!"<<endl;
        break;
    }
    cout<<"\n ----- example 2 : select a gender ----- "<<endl;

    char gender;
    string selectedgender = "";
    cout<<"Select a gender: ";
    cout<<"\nM for male \nF for female \nO for other"<<endl;
    cin>>gender;
    
    switch (gender){
    case 'm' : case 'M':
        selectedgender = "Male";
        break;

     case 'f' : case 'F':
        selectedgender = "Female";
        break;

    case 'o' : case 'O':
        selectedgender = "Other";
        break;
    
    default:
        selectedgender = "UNKNOWN";
        break;
    }
    cout<<"Selected gender is "<<selectedgender<<endl;

    cout<<"\n ----- EXERCISE ----- "<<endl;

    char answer;
    int num;
    cout<<"Please enter the number -> ";
    cin>>num;
    cout<<"\nDo you whant this number to be doubled ? (y/N) -> ";
    cin>>answer;

    switch(answer){

        case 'Y' : case 'y':
        num *= 2;
        break;

        case 'N' : case 'n':
        break;

        default: 
        num = 0;
        break;
    }

    cout<<"\nThe number is set to "<<num<<endl;




return 0;
}