#include<iostream>
using namespace std;

int main(){
    int number1,number2,temp;

    cout<<"enter the number:- ";
    cin>>number1;
    cout<<"enter the number:- ";
    cin>>number2;

    temp=number1;
    number1=number2;
    number2=temp;

    cout<<"number1:- "<<number1<<endl;
    cout<<"number2:- "<<number2;
}