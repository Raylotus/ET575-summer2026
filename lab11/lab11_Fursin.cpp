/*
Maksym Fursin
June 9, 2026
lab 11: do-while loop , nested loop
*/

#include<iostream>

using namespace std;

int main(){

    cout<<"\n ----- Example 1 : do loop -----"<<endl;
    int num;
    char choice;

    do{
        cout<<"Enter a number ";
        cin>>num;
        if(num%2==0 && num != 0){
            cout<<"Even number"<<endl;
        }
        else if(num == 0) cout<<"Number is zero"<<endl;
        else cout<<"Number is zero"<<endl;
        cout<<"Do you want another run? ";
        cin>>choice;
    } while(choice =='y' || choice == 'Y');
    cout<<"end of a program";

    cout<<"\n ----- Example 2 : loop with a break statement -----"<<endl;

    int sumnmembers = 0;
    int n;
    while(true){
        cout<<"Entera positive number: ";
        cin>>n;

        if(n>0){
            sumnmembers += n;
        }
        else{break;}
    }
    cout<<"End of while loop. Total sum = "<<sumnmembers<<endl;

    cout<<"\n ----- Example 3 : loop with continue -----"<<endl;

    int sumall =0;
    for(int m =1; m<=9; m++){
        cout<<m<<"\t";
        if(m == 5){
            continue;
        }
        sumall += m;
    }
    cout<<endl<<"Total sum = "<<sumall<<endl;

    cout<<"\n ----- Example 4 : loop with conditional statement -----"<<endl;

    int count =0;
    int i = 10;

    while(i>5){
        i--;
        if(i%2 == 0){count += i; continue;}
        count -= 3;
    }
    cout<<"Final count is = "<<count<<endl;
    /*
loop iteration | while(i>5) | i-- | if(i%2 ==0 ) | count += i | count -= 3
----------------------------------------------------------------------------------------------------

      1        | while(10>5) | 10-1 = 9 | if(9%2==0)      | skipped        | count = 0-3 = -3
               |    true     |   i=9    |    false        |                |

----------------------------------------------------------------------------------------------------

      2        | while(9>5)  | 9-1 = 8  | if(8%2==0)      | count=-3+8=5   | skipped
               |    true     |   i=8    |    true         | count = 5      | because of continue

----------------------------------------------------------------------------------------------------

      3        | while(8>5)  | 8-1 = 7  | if(7%2==0)      | skipped        | count = 5-3 = 2
               |    true     |   i=7    |    false        |                |

----------------------------------------------------------------------------------------------------

      4        | while(7>5)  | 7-1 = 6  | if(6%2==0)      | count = 2+6    | skipped
               |    true     |   i=6    |    true         | count = 8      | because of continue

----------------------------------------------------------------------------------------------------

      5        | while(6>5)  | 6-1 = 5  | if(5%2==0)      | skipped        | count = 8-3 = 5
               |    true     |   i=5    |    false        |                |

----------------------------------------------------------------------------------------------------

      6        | while(5>5)
               | false ---> stop while loop

----------------------------------------------------------------------------------------------------
     */

    return 0;
}