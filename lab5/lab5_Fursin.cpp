/*
Maksym Fursin
June 2, 2026
lab 5: 
*/


#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<<"\n -------- example 1 : string indexing --------"<<endl;

    string username = "peterpan 123";
    cout<<"The fourth character of username = "<<username[3]<<endl;

    // at() - to access a char in string

    cout<<"The sixth chatracter of username = "<<username.at(5)<<endl;

    cout<<"\n -------- example 2 : length of a string --------"<<endl;
    int num_username = username.length();
    cout<<"There are "<<num_username<<"characters in username"<<endl;

    cout<<"\n -------- example 3 : adding strings --------"<<endl;
    string n = "Never";
    string m = "Again";
    cout<<n + m<<endl;

    cout<<"\n -------- example 4 : subtracting char from string --------"<<endl;
    //substr(x,y) -> x start index , y ammaunt of char extracted 
    cout<<"Extracted word = "<<n.substr(1,4)<<endl;

    cout<<"\n -------- example 5 : inserting cahr into a string --------"<<endl;
    //inset(x,y) x index y char to be inserted 
    cout<<"Curent username "<<username<<endl;
    username.insert(5,"LAND");
    cout<<"New username "<<username<<endl;
    cout<<"\n -------- example 6 : add character/s to the end of a string --------"<<endl;
    username.append("END");
    cout<<"New username "<<username<<endl;
    cout<<"\n -------- example 7 : replace character in a string --------"<<endl;
    //replace(x,y,z) x index , y number of char to be replaced in orig string , z new charecters 
    string name = "Peter Pan";
    cout<<"Curent name "<<name<<endl;
    name.replace(1,4,"atrick");
    cout<<"New name "<<name<<endl;
    cout<<"\n -------- example 8 : erasing character from a string --------"<<endl;
    //erase(x,y) x index , y amount of charecters to be removed starting from index x 
    cout<<"Old name "<<name<<endl;
    name.erase(9,2);
    cout<<name<<endl;
    cout<<"New name "<<name<<endl;
    cout<<"\n -------- example 9 : find index of char in a string --------"<<endl;
    //find(x) x char that we are looking for '
    cout<<username<<endl;
    int index_r = username.find("r");
    cout<<"Index of first r in username "<<index_r<<endl;

    cout<<"Index of first pan in username "<<(username.find("pan"))<<endl;

    int never = username.find("NEVER");
    cout<<"Index of first NEVER in username "<<never<<endl;
    cout<<"Index of first NEVER in username "<<(username.find("NEVER"))<<endl;
    
    cout<<"\n -------- example 10 : combinate methods --------"<<endl;
    cout<<username<<endl;
    cout<<m<<endl;
    //find index for 123
    int index123 = username.find("123");
    username.insert(index123,m);
    cout<<username<<endl;

    cout<<"\n -------- EXERCISE --------"<<endl;

    string new_word;
    cout<<"Type a word: ";
    cin>>new_word;

    cout<<"The 4th character is: "<<new_word.at(3)<<endl;
    cout<<"The length of the word is: "<<new_word.length()<<"characters."<<endl;
    new_word.replace(1,3,"-- $ --");
    cout<<"After replacement: "<<new_word<<endl;
    new_word.erase((new_word.length() - 2 ), 2 );
    cout<<"After removing two characters from the end: "<<new_word<<endl;


    return 0;
}

