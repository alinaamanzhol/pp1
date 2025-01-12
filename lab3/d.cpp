#include <iostream>

using namespace std;
int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];

    }
    int max = arr[0];
    int position = 0;

    for(int i = 0; i < size; i++)
    {
        if(max < arr[i]) {
            max = arr[i];
        position = i; }
    }
    cout << position + 1;










    return 0;
}