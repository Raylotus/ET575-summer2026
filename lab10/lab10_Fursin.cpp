/*
Maksym Fursin
June 9, 2026
lab 10: for loop
*/

#include<iostream>

using namespace std;

int main(){

    cout<<"\n ------ Example 1: for loop as counter ------"<<endl;

        int x = 3;
        for(x; x <=5;x++){
            cout<<"Hello "<<x<<endl;
        }
        cout<<"End of for loop. Value of x = "<<x<<endl;

    cout<<"\n ------ Example 2: for loop as counter ------"<<endl;

        for(int x=1; x<=9; x+=2){cout<<x<<"\t";}

    cout<<"\n ------ Example 3: for loop as a decrement counter with different steps ------"<<endl;

    for(int x = 10; x>=-10; x-=3){
        cout<<x<<"\t";
    }

    cout<<"\n ------ Example 4: for loop with cinditional statement ------"<<endl;

    int counter = 0, sumpositive = 0;

    for(int x = -20; x<=20; x+=4){
        cout<<x<<"\t";
        if(x%5==0 && x != 0 ){counter++;}
        if(x>0){sumpositive += x;}
    }
    cout<<endl<<"numbers that are multipled of 5 = "<<counter<<endl;
    cout<<endl<<"summ of all positive numbers = "<<sumpositive<<endl;

    cout<<"\n ------ Example 5: while loop as a counter ------"<<endl;
    //while loop to pritn from 1 to 5
    int n = 1;
    while(n<=5){cout<<n<<"\t"; n++;}

    //not on exam 2
    cout<<endl;
    n = 1;
    while(n++ <=5){cout<<n<<"\t";}

    cout<<endl;
    n = 1;
    while(++n <=5){cout<<n<<"\t";}

    cout<<"\n ------ Example 6: while loop to validate an input ------"<<endl;
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    while(!(number>=1 && number <=9)){
        cout<<"Enter a new number between 1 and 9: ";
        cin>>number;
    }
    cout<<"Collected number = "<<number<<endl;

    cout<<"\n------ EXERCISE 1 ------"<<endl;

    counter = 0;
    for(int n = 21; n >= -21; n-=5){
        if(n % 2 == 0){
            counter += n;
            cout<<"Counter update new value is : "<<counter<<endl;
        }
    }
    cout<<"\n------ EXERCISE 2 ------"<<endl;
    
    cout<<"Enter starting vlaue for loop: "<<endl;
    cin>>counter;

     for(int i = counter; i <= 30; i += 4)
    {
        cout<<"Counter update new value is : "<<i<<endl;
    }




    return 0;
}