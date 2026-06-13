/*
Maksym Fursin
June 10, 2026
lab 12: nested loops
*/

#include <iostream>

using namespace std;

int main(){

    cout<<" --------- Example 1 : nested for loop ---------"<<endl;
    int i = 0;
    while (i++ < 3)
    {
        cout<<"OUTER LOOP "<<i<<endl;
        cout<<"\t\t INNER LOOP"<<endl;
        int j =0;
        while (j++ < 5)
        {
            cout<<"\t"<<j;
        }
        cout<<endl;
    }
    

    cout<<" --------- Example 2 : nested for loop ---------"<<endl;

    int row=0, seats=0;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of seats: ";
    cin>>seats;

    for(int r = 1; r <= row; r++ ){
        for(int c = 1; c < seats; c++){
            cout<<"Row "<<r<<" seat "<<c<<"\t";
        }
        cout<<endl;
    }
    

    cout<<" --------- Example 3 : Graphing using nested for loop ---------"<<endl;
    const int GRAPHSIZE = 9;
    for(int row = 1; row <= GRAPHSIZE; row++){
        for(int col = 1; col <= GRAPHSIZE; col++){
            if(col == 5 || row == 5){
                cout<<" x ";
            }
            else{cout<<" . ";}
        }
        cout<<endl;
    }

    cout<<" --------- Example 4 : graphing H useing nested loops ---------"<<endl;
    int dimension = 10;
    for(int row = 1; row<=dimension; row++){
        for(int col =1; col<=dimension; col++){
            if((row>=3 && row<=8 && col >=3 && col<=4) || (row>=5 && row<=6 && col >=5 && col<=6) || (row>=3 && row<=8 && col >=7 && col<=8)) cout<<" % ";
            else cout<<" . ";
        }
        cout<<endl;
    }
    cout<<" --------- EXERCISE A ---------\n"<<endl;

    bool win = 0;
    bool test = 0;
    const int GUESS = 9;
    int userN;

    cout<<"Guess number between 1 and 10 : ";
    
    while(win == 0){
    
    cin>>userN;

    if(userN >= 1 && userN <= 10){test = 1;}
    else{cout<<"Ivalid number please re-enter number between 1 and 10 : "; test = 0;}

    while (test == 1)
    {
        if(userN == GUESS){cout<<"\nYou guessed it congratulations ! "<<endl; win = 1; break;}
        else{cout<<"You didn't guess it try again : "; break;}         
    }
}
    


    cout<<" --------- EXERCISE B ---------"<<endl;

    int dem = 10;
    for(int row = 1; row<=dem; row++){
        for(int col =1; col<=dem; col++){
            if(
                (row >= 3 && row < 9 && col >= 3 && col <= 4) ||
                (row >= 7 && row <= 10 && col >= 5 && col <= 6) ||
                (row >= 3 && row < 9 && col >= 7 && col <= 8)
            )
                {cout<<" % ";}
            else{cout<<" . ";}
        }
        cout<<endl;
    }

return 0;
}
