/*
Maksym Fursin
June 11, 2026
lab 15: Introduction to function
*/
#include <random>
#include <math.h>
#include <iostream>
using namespace std;
//emaxpe 1
void cheers(int n){
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
}


//emaxpe 2
int summation(int n){
    if(n != 0){
        return (summation(n-1) + n);
    }
    else{return 0;}
}

//Example 3 number vlaidator

int getpositive(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if(num>0){return num;}
    else{return getpositive();}

}

float hypotenuse(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2,2));
}

void printresult(int side1, int side2, float hyp){
    cout<<"The hypotenuas of a right triangle with sides "<<side1<<" and "<<side2<<" is "<<hyp<<endl;
}

void randomnumber(){
    srand(time(0));
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    
}
//ex 6
int random_neg5_10(){
    srand(time(0));
    return (-5 + rand()%16);
}

//EXERCISE

const float GRAVITY = 9.8;

int randomNumber()
{
    srand(time(0));
    return rand() % 100 + 1;
}

float fallingDistance(int time)
{
    return 0.5 * GRAVITY * pow(time, 2);
}

void outputFunction(int time, float distance){
        cout << "The falling distance in "<<time<<" seconds is "<<distance<<" meters."<< endl;
}