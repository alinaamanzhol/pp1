#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int price;
        cin >> price;
        arr.push_back(price);

    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] <= arr[i])
            {
                arr[i] -= arr[j];
                break;
            }
        }
        
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr.at(i) << " ";
    }


    return 0;
}