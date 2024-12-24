#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> v1={2,6,3,0,7,1,5};
        int n=v1.size(); //7

        vector<int> vr(n);

        cout << "vector is :- ";
    for(int i=0;i<=n-1 ; i++){
        cout << v1[i] <<" ";
    }
        cout << endl;

        
        for(int i= 0; i< v1.size() ; i++)
         {
            n--;
           vr[i]=v1[n];
        }
        cout << endl;
         
        cout << "Reversed vector is :- ";
    for(int i= 0; i < vr.size(); i++){
        cout << vr[i] <<" ";
    }
        cout << endl;
          
    return 0;
}   