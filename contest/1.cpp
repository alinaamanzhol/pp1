#include <iostream>

using namespace std;
int main(){
    int x, y;

    cin >> x >> y;


    for(int i = x; i < y; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if(i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if(i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else{
            cout << i << endl;
        }
    }
    cout << endl;





    return 0;
} 