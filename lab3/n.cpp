#include <iostream>

#include <algorithm>
using namespace std;
int main(){
    int a;
    cin >> a;

    int arr1[a];
    

    for(int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    int b;
    cin >> b;
    int arr2[b];

    for(int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    int size = a + b;

    int arr3[size];

    for (int i = 0; i < size; i++)
    { 
        if(i < a) arr3[size] = arr1[a];
        else arr3[i] = arr2[i - a];


    }
    sort(arr3 , arr3 + size);

    for(int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }










    return 0;
}