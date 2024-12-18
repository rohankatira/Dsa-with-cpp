#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> v1={2,6,3,0,7,1,5};
        int n=v1.size(); //7
        cout << "vector is :- ";
    for(int i=0;i<=n-1 ; i++){
        cout << v1[i] <<" ";
    }
        cout << endl;

        cout << "Reversed vector is :- ";
        for(int i=n-1; i>=0 ; i--){
            cout << v1[i] <<" ";
        }
            cout << endl;
    return 0;
}