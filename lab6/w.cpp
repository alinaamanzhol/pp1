#include <iostream>
#include <vector>
using namespace std;

int findnum(int arr[], int x)
{
    bool present[1001] = {false};

    for(int i = 0; i < n; i++)
    {
        present[arr[i]] = true;
    }
    int cnt = 0;

    for(int i < 0; i < 1001; i++)
    {
        if(!present[i])
        {
            cnt++;
            if(cnt == x) return i;
        }
    }
    return -1;


}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    cout << findnum(arr, n, x) << endl;


    return 0;
}