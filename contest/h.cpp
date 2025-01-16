#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    int max1 = arr[0];
    int max2 = arr[0];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[size];

    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max1) max1 = arr[i];
        if(max1 > max2) max2 = arr[i];
        cout << max1 * max2;

    }




    return 0;
}