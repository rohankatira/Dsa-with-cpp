#include<iostream>
using namespace std;
int main(){

    int x,y,op1,op2,op3;

    cout << "enter the number:-";
    cin >> x ;

    cout << "enter the number:-";
    cin >> y ;

    op1=(x+y)*(x+y);
    op2=(x-y)*(x-y);
    op3=(x+y)*(x+y)*(x+y);

 cout << "(x + y) whole square is: " << op1 << endl;
 cout<<  "(x - y) whole square is: " << op2 << endl;
 cout<< "(x + y) whole cube is: " <<  op3 << endl;   
}