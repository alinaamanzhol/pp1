#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int N;
    cin >> N;

    int PowerOfTwo = 1;

    for(int i = 0; pow(2, i) <= N; i++) 
    {
        cout << pow(2, i) << " ";

        
    }






    return 0;
}