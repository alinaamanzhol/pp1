#include <iostream>
using namespace std;

void lib(int arr[], int size, int x)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == x) 
        {cout << "YES" << endl;
        return;
        }
    }
    cout << "NO" << endl;
}
int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }


    int x;
    cin >> x;

    lib(arr, size, x);
    return 0;
}