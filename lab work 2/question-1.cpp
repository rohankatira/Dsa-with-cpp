// create a program to find minimum number.
#include<iostream>
using namespace std;

int main(){

    int number1,number2;  //declaring the variable

cout<<"Enter the value for the number1:-"; //showing the output for entering the first digit value on console  

cin>> number1;  //taking the input from the user during the program run time.    

cout<<"Enter the value for the number2:-"; //showing the output for entering the second digit value on console  

cin>> number2;  //taking the input from the user during the program run time.  

if (number1 < number2){ //providing the condiction whather the conmdiction number1 is minimum or not 
    cout << number1 << " is minimum";  //msg is provided on the base on condiction
} else{
    cout << number2 << " is minimum";   //msg is provided on the base on condiction
}

return 0;
}