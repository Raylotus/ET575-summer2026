/* 
Maksym Fursin
Homework 2: Loops mechanism
*/

#include <string>
#include <iostream>

using namespace std;


int main(){
    cout<<"-------- Question 1 --------\n"<<endl;

    int userN = 0;
    cout<<"Enter a number greater than or equal to 10 : ";
    do{
    cin>>userN;
    if(userN >= 10){cout<<userN<<" is a valid number!"<<endl;}
    else{cout<<userN<<" is invalid. Enter a number greater than or equal to 10 : ";}
    }
    while (userN < 10);
    
    cout<<"-------- Question 2 --------\n"<<endl;

    int num1 = 0, num2 = 0;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 > num2){
        int i = num2;
        cout<<"RESULT =";
        while(num1 >= i){
            cout<<" "<<i;
            i++;
        }
        cout<<endl;
    }

    else if(num1 < num2){
        int i = num1;
        cout<<"RESULT =";
        while(num2 >= i){
            cout<<" "<<i;
            i++;
        }
        cout<<endl;
    }

    else{cout<<"Eror entered invalin numbers"<<endl;}

    cout<<"-------- Question 3 --------\n"<<endl;

    // The screenshot shows a 9x9 grid, while the instructions specify 10x10.
    // I used a 9x9 grid to keep the heart centered.

    const int dimension = 9;

    for(int row = 1; row <= dimension; row++){
        for(int col = 1; col <= dimension; col++){

            if(
            (row == 3 && (col == 4 || col == 6)) ||
            (row == 4 && (col == 3 || col == 4 || col == 6 || col == 7)) ||
            (row == 5 && (col == 3 || col == 4 || col == 5 || col == 6 || col == 7)) ||
            (row == 6 && (col == 4 || col == 5 || col == 6)) ||
            (row == 7 && col == 5)
            )
            {cout<<" % ";}
            else
            {cout<<" . ";}
        }
        cout<<endl;
    }


    return 0;
}