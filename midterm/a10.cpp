#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;


    for(int i = 0; i < n; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == max) cnt++;

    }
    cout << cnt;






    return 0;
}