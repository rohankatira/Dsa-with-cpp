#include<iostream>
using namespace std;
int main(){

    int i;

    cout<< "Enter the number :-";
    cin>> i;

    while(i>=0){

        if(i%2 !=0){
            cout << i << " ";
        }
        i--;
    }
    return 0;   
}