// swaping the values without using the third value
#include<iostream>
using namespace std;
int main(){

    int number1,number2;

    cout<<"enter the first number:- ";
    cin>> number1;
    cout<<"enter the secon number:- ";
    cin>> number2;
    

    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;

    cout<< "The value of the first number after swaping is :- "<<number1<<endl;
    cout<< "The value of the second number after swaping is :- "<<number2;

}