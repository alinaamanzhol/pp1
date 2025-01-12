#include <iostream>
using namespace std;
int main(){
    int size, l ,r;
    cin >> size >> l >> r;
    
    int arr[size];
    long sum = 0;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } 

    
    for(int i = l; i <= r; i++)
    {
        sum += arr[i-1];
    }
    cout << sum;











    return 0;
}