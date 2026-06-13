/*
Maksym Fursin
June 10, 2026
lab 13: Introduction to function
*/

#include <iostream>

using namespace std;
    
//example 1
void printhi(){
    cout<<"Hellow Function!"<<endl;
    return;
}
//example 2
void greeting(string username){
    cout<<"Good morning "<<username<<" !"<<endl;
}
//example 3
int dbnumber(int n){
    return n*2;
}

//example 4
float areatectangle(int width, int lenght){
    return width * lenght;
    //any code after first return ignored 
    float n = 2*(width * lenght);
    return n;
}

//example 5
string checknumber(int number){
    if(number > 0){
        return "positive";
    }
    else if(number < 0){return "negative";}
    else{return "zero";}
}

//example 6 compostion of function

//function 1
int positiveNumber(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    while (n <= 0)
    {
        cout<<"Error enter a positive number ";
        cin>>n;
    }
    return n;
}
//function 2 area of sqare
    int areasqure(int side){return side * side;}

//function 3 
void printResult(int area){
    cout<<"The area of a square is "<<area<<endl;
}

// Example 7
int addition(int a, int b){
    return a+b;
}

int tripleaddition(){
    return 3*(addition(2,3));
}

//EXERCISE

int first(){
    int userin;
    cout<<"Enter a number between 1 and 10 : ";
    cin>>userin;
    while (userin < 1 || userin > 10)
    {
        cout<<"Error invalid number\tEnter a number between 1 and 10 : ";
        cin>>userin;
    }
    return userin;
    
}

void second(int num){
    cout<<"All integers from the collected number up to 15"<<endl;
    for(int i = num; i <= 15; i++){
        cout<<" "<<i;
    }
    cout<<endl;
}

int third(int num){
    int count = 0;
    for(int i = num; i <= 15; i++){
        if(i % 3 != 0){count++;}
    }
    return count;
}

void fourth(int num){
    cout<<"From "<<num<<" up to 15, there are "<<third(num)<<" number/s that are not multiplied by 3"<<endl;
}