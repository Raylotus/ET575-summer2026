#include <iostream>
#include <random>
using namespace std;

//example 1 
void intropointer(){
    int num = 12;
    char sym = '#';
    string n = "Peter";

    int* ptrint;
    char* ptrchar;
    string* ptrstring = &n;

    // check a pointer 
    cout<<ptrint<<endl;

    ptrint = &num;
    ptrchar = &sym;

    cout<<ptrint<<endl;
    cout<<ptrchar<<endl;
    cout<<ptrstring<<endl;

    cout<<*ptrint<<endl;
    cout<<*ptrchar<<endl;
    cout<<*ptrstring<<endl;

}
//example 2
void a(string v){
    cout<<"V = "<<v<<endl;
}
void b(string& v){
    cout<<"B = "<<v<<endl;
}
void c(string* v){
    cout<<"C = "<<v<<endl;
}

//example 3 
void introarray(){
    int scores[3];

    cout<<scores<<endl;
    cout<<"First element = "<<scores[0]<<endl;

    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;

    cout<<"First element = "<<scores[0]<<endl;

    char symbols[5] = {'$','#','@','!','G'};
    cout<<"3rd symbol = "<<symbols[2]<<endl;

    string names[] = {"Peter","Annie"};
    cout<<"2nd name "<<names[1]<<endl;

    for(int i = 0; i<5; i++){
        cout<<symbols[i]<<endl;
    }
    float avgscore = 0, sumscore = 0;
    for(int i = 0; i<3; i++){
        sumscore += scores[i];
    }
    avgscore = sumscore/3;

    cout<<"The avgrage score is = "<<avgscore<<endl;
}

//example 4 
void printelements(int sizearray, int arr[]){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void updatearray(int sizearray, int *arr){
    int a; 
    for(int i = 0; i<sizearray; i++){
        cout<<"Enter an age : ";
        cin>>arr[i];
    }
}

int coutadult(int sizearray, int *arr){
    int counter = 0;
    for(int i = 0; i<sizearray; i++){
        if(arr[i] >= 21) counter++;
    }
    return counter;
}

// EXERCISE B

void fillArray(int arr[])
{
    for(int i = 0; i < 10; i++)
    {
        arr[i] = 1 + rand() % 9;
    }
}

int countEvenNumbers(int arr[])
{
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
