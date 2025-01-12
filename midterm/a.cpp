#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;


    
    int cntEven = 0;
    int cntOdd = 0;
    int sumEven = 0;
    int sumOdd = 0;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if(num % 2 == 0)
        {
            sumEven += num;
            cntEven++;
        } 
        else
        {
            sumOdd += num;
            cntOdd++;
        }
    }

    int lefthand = sumEven * cntEven;
    int righthand = cntOdd * sumOdd;

    cout << "Left hand magic power:" << " " << lefthand << endl;
    cout << "Right hand magic power:" << " " << righthand << endl;




    return 0;
}