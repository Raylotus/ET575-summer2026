/*
Maksym Fursin
June 1, 2026
lab 3: numerical variables
*/

#include <iostream>

using namespace std;

int main(){

    cout<<"\n ---- example 1: numerical variables ----"<<endl;
    int number = 5.9;
    cout<<"The number is = "<<number<<endl;

    //float or double data types
    //double size = float size * 2 
    double number1 = 3.1234567;
    float number2 = 9.123142567;
    cout<<"The number1 is = "<<number1<<endl;
    cout<<"The number2 is = "<<number2<<endl;

    cout<<"\n ---- example 2: constant variables ----"<<endl;
    number = 23.65;
    cout<<"The number1 is = "<<number1<<endl;

    const float EXP = 2.718; // cannot be changed
    cout<<"The value of EXP = "<<EXP<<endl;

    cout<<"\n ---- example 3: calculate the height of falling object ----"<<endl;
    const float GRAVITY = 9.8;
    float time = 0, height = 0;
    cout<<"Enter the falling time"<<endl;
    cin>>time;

    // calculate the height of the falling object = 0.5 * g * time * time
    height = 0.5*GRAVITY*time*time;
    cout<<"The height of a falling object at "<<time<<" is "<<height<<" meters."<<endl;

    cout<<"\n ---- example 4: calculate the circumference of a circle ----"<<endl;

    const float PI = 3.14159;
    float circumference = 0, radius = 0;

    cout<<"Enter radius: ";
    cin>>radius;

    circumference = 2*radius*PI;
    cout<<"Circumference is = "<<circumference<<endl;

    cout<<"\n ---- EXERCISE ----"<<endl;
    int r = 0; // EXERCISE: radius

    // I will use the PI variable created earlier
    cout << "Enter the radius of the circle and sphere -> "; // Asking the user to enter a radius
    cin >> r; // Storing the value entered by the user in the r variable

    float area = PI * r * r; // Calculating the area using the provided formula and assigning it to a float variable
    float volume = (4 / 3.0) * PI * r * r * r; // Calculating the volume using the provided formula and assigning it to a float variable

    cout << "The area of the circle is -> " << area << endl; // Outputting the area value.
    cout << "The volume of the sphere is -> " << volume << endl; // Outputting the volume value

    return 0;
}