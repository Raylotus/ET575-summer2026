/*
Maksym Fursin
June 3, 2026
lab 7: Leveraging AI as a C++ Coding Assistant
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout<<"\n ------ example 1 : bool variable ------"<<endl;

    int n;
    bool checkpositive;

    cout<<"Enter a number: ";
    cin>>n;

    checkpositive = n > 0;

    cout<<"Is number "<<n<<" positive? "<<checkpositive<<endl;

    checkpositive = -5;
    cout<<"updated checkpositive = "<<checkpositive<<endl;

    checkpositive = "Hellow";
    cout<<"updated checkpositive = "<<checkpositive<<endl;

    cout<<"\n ------ example 2 : If statement ------"<<endl;

    int c = 10;
    if(n==0){
        cout<<"n is zero!"<<endl;
        c += 20;
    }
    
    cout<<"\t Updated c = "<<c<<endl;

     cout<<"\n ------ example 3 : If-else statement ------"<<endl;
        if(n%2 == 0){
            cout<<n<<" is EVEN number"<<endl;
        }
        else {cout<<n<<" is ODD number"<<endl;}
    
    cout<<"\n ------ example 4 : If-else statement ------"<<endl;

    int wavelength = 0;
    string emittedlight;
    cout<<"Enter a wavelength (nm): ";
    cin>>wavelength;

    if(wavelength < 379 && wavelength >= 10){emittedlight = "UltraViolet";}
    else if(wavelength <= 520 && wavelength >= 380){emittedlight = "Blue";}
    else if(wavelength <= 590 && wavelength >= 521){emittedlight = "Green";}
    else if(wavelength <= 740 && wavelength >= 591){emittedlight = "Red";}
    else if(wavelength >= 741){emittedlight = "InfraRed";}
    else{emittedlight = "Undefined";}

    cout<<wavelength<<" nm emits "<<emittedlight<<" light"<<endl;

    cout<<"\n ------ example 5 : If-else statement ------"<<endl;
    /*
    if(n%2 == 0) {cout<<n<<"is an EVEN number"<<endl;}
    else{cout<<n<<"is an OOD number"<<endl;}
    */

    cout<<n<<((n%2 == 0) ? "is an EVEN number" : "is and ODD number")<<endl; // shortcut for if-else statement

    cout<<"\n ------ example 6 : conditional operator ------"<<endl;
    int max = 10;
    bool checkmax = false;

    (n > max) ? checkmax = true : checkmax = false;
    // or checkmax = (n > max) ? true : false;

    cout<<"Is n grater than 10? = "<<checkmax<<endl;

    //if else
    if (n>max){checkmax = true;}
    else{checkmax = false;}

    cout<<"Is n grater than 10? = "<<checkmax<<endl;

    cout<<"\n ------ example 7 : nested condition statement ------"<<endl;
    /*
    if(n>0 && n%2 != 0){cout<<"positive and odd number";}
    else if(n>0 && n%2==0){cout<<"positive and even number";}
    else if(n<0 && n%2!=0){cout<<"nagative and odd number";}
    else if(n<0 && n%2==0){cout<<"nagative and even number";}

    else{cout<<"zero"endl;}
    */
    
    if(n>0){
        if(n%2==0){cout<<"positive and even number"<<endl;}
        else{cout<<"positive and odd number"<<endl;}}
    else if(n<0){
        if(n%2==0){cout<<"nagative and even number"<<endl;}
        else{cout<<"nagative and odd number"<<endl;}}
    else
    {cout<<"zero"<<endl;}
    
    cout<<"\n -------- EXERCISE --------"<<endl;    
        
    float weight;
    float cost;

    cout<<"Pleas enter the weight of the package in pounds -> ";
    cin>>weight;

    if(weight > 0 && weight <= 2){cost = 5.00;}
    else if(weight > 2 && weight <= 5){cost = 8.20;}
    else if(weight > 5 && weight <= 10){cost = 10.25;}
    else if(weight > 10){cost = 12.50;}
    else{cost = 0;}

    cout<<"A package of weight "<<weight<<" costs $ "<<cost<<endl;

    return 0;
}