//  CREATE A PROGRAM THAT TAKE SIZE FORM THE USER AND PRINT IT UNTIL THE CONDITION SATISFIED USING WHILE LOOP.
#include<iostream>
using namespace std;
int main(){

    int i=1, size;
    cout<< "Enter your size:- ";
    cin>> size;

    while(i<=size){
        cout << i << " ";
        i++;
    }
    return 0;
}