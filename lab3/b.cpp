#include <iostream>

using namespace std;

int main(){
    int size;

    cin >> size;
     int arr[size];

     for (int i = 0; i < size; i++)
     {
        cin >> arr[i];
     }
      int cnt = 0;

      for(int i = 0; i < size; i++)
      {
        if(arr[i] > 0) cnt++;
      }
      cout << cnt;


    return 0;
}