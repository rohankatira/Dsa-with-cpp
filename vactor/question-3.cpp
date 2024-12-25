#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1={2,6,3,0,7,1,5};
    int n = v1.size();
    vector <int> ans;

    cout << "vector is :- ";
    for(int i=0;i<v1.size() ; i++)
    {
        cout << v1[i] <<" ";
    }
        cout << endl;
        
    for(int i=0;i< n-1 ; i++)
    {
        if(v1[i] < v1[i-1] && v1[i] < v1[i+1])
        {
            ans.push_back(v1[i]);
        }
    }

    cout << "smallest elements are : ";

    cout << endl;

    return 0;
}