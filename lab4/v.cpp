#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i = 2; i <= num; i++)
    {
        int cnt =  0;
        for(int j = 1; j <= i; j++){
            if (i % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout << i << " is prime " << endl;
        }
    }
    return 0;
}