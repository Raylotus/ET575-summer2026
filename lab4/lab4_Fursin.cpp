/*
Maksym Fursin
June 1, 2026
lab 4: numerical operator
*/


#include <iostream>

using namespace std;

int main(){
    cout<<"\n ---- example 1: numerical variables ----"<<endl;
    int n = 9, m = 2;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;

    n++;
    cout<<"updated n = "<<n<<endl;

    m--;
    cout<<"updated m = "<<m<<endl;

    n += m;
    cout<<"updated n = "<<n<<endl;

    m *=3;
    cout<<"updated m = "<<m<<endl;

    cout<<"Modulas Remainder = "<<n%m<<endl;
    cout<<"n = "<<n<<endl;
    n %= m;
    cout<<"n = "<<n<<endl;

    cout<<"\n ---- example 2: comparison operators ----"<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"Are n and m equal? "<<(n==m)<<endl;
    cout<<"Is n not equal to m? "<<(n != m)<<endl;
    cout<<"Is n grater than or equal to n? "<<(n >= m)<<endl;

    cout<<"\n ---- example 3: logical/boolean operators ----"<<endl;
    //false 0, true 1, && and, || or, ! not
    bool check1 = m < n;
    bool check2 = n < m;
    bool check3 = m != n;

    cout<<"check1 = "<<check1<<endl;
    cout<<"check2 = "<<check2<<endl;
    cout<<"check3 = "<<check3<<endl;

    bool result1 = check1 && check2 && check3;
    bool result2 = check1 || check2 || check3;
    bool result3 =! check2;

    cout<<"result1 = "<<result1<<endl;
    cout<<"result2 = "<<result2<<endl;
    cout<<"result3 = "<<result3<<endl;

    cout<<"\n ---- EXERCISE ----"<<endl;
    int number = 0;
    char character = 0;
    cout << "Enter a number -> ";
    cin >> number;
    cout << "Enter a character -> ";
    cin >> character;

    int triple = number;
    triple *= 3;    

    int rem = character;
    rem %= 60; 

    cout<<"Triple the number \t"<<triple<<endl;
    cout<<"Remainder of character\t"<<rem<<endl;
    cout<<"is number less than or equal to character? \t"<<(number <= character)<<endl;
    cout<<"Result after comparison \t"<<(number<= -1 || character != 5)<<endl;
    cout<<"is number between -2 and 2? \t"<<(character >= -2 && character <= 2)<<endl;




    return 0;
}