#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n:- ";
    cin >> n; //user choice metrix;

    vector <int> v1(n,n);

    vector<vector<int>> V2(n, v1);
for(vector<int> elem :V2)
{
    for(int e : elem)
    {
        cout << e << " ";
    }
    cout << endl;
}

    return 0;
}