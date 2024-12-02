// CREATE A PROGRAM TO CHECK WEATHER THE NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL

#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "enter the number :- ";
    cin>> number;

    if (number < 0){
        cout<< number << " this number is nagative";
    } else if(number == 0){
        cout<< number << " this number is netural";
    } else if(number > 0){
        cout << number <<" this number is positive";
    }

    return 0;
}