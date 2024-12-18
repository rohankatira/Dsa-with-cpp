
#include <iostream>
using namespace std;

int main(){

    int i, start, end;

    cout << "enter the starting year : ";
    cin >> start;

    cout << "enter the ending year : ";  
    cin >> end;

    while (start <= end){

        if(start % 4 == 0){
            cout << start << " ";
        }

        start ++;

    }  

    return 0;
}