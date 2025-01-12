#include <iostream>
using namespace std;
int main(){
    int arr[100001];



    int value, index = 0, size = 0;
    while (cin >> value) {
        arr[index] = value;
        index++;
        size++;
    }
    
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}