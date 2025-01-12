#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    int maxCount = 0;
    int count[1001] = {0};

    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        if(maxCount < count[arr[i]]) maxCount = count[arr[i]];
    }

    for(int i = 1001; i > 0; i--)
    {
        if(count[i] == maxCount)
        {
            cout << i << " ";
        }
    }
 




    return 0;
}