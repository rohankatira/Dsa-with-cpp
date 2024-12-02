// CREATE THE PROGRAM IN CPP TO FIND THE AVERAGE OF THREE SUBJECT MATHS, ENGLISH, SCIENCE

#include<iostream>
using namespace std;

int main(){
    float Maths, English ,Science;
    float average;

    cout<< "Enter the marks for the Maths subject:- ";
    cin>> Maths;
    cout<< "Enter the marks for the English subject:- ";
    cin>> English;
    cout<< "Enter the marks for the Science subject:- ";
    cin>> Science;

     average = ( Maths + English + Science)/3;      // FIND THE AVEREAGE

    cout << "average mark : " << average;       // PRINT THE AVERAGE MARKS

    return 0;
}