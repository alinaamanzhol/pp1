#include <iostream>
#include <string>
using namespace std;
int main(){
    string expression;
    cin >> expression;
    
    string triplets[] = {"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};

    int PosPlus = expression.find('+');

    string left = expression.substr(0, PosPlus);
    string right = expression.substr(PosPlus + 1);

    int num1 = 0;
    int num2 = 0;

    for(int i = 0; i < left.size(); i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(left.substr(i, 3) == triplets[j])
            {
                num1 = num1 * 10 + j;
                break;
            }
        }
    }

    for(int i = 0; i < right.size(); i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(right.substr(i, 3) == triplets[j])
            {
                num2 = num2 * 10 + j;
                break;
            }
        }
    }

    int totalsum = num1 + num2;


    string result;

    if(totalsum == 0)
    {
        result = "ZERO";
    }
    else
    {
        while(totalsum > 0)
        {
            result = triplets[totalsum % 10] + result;
            totalsum /= 10;
        }
    }

    cout << result << endl;
    return 0;
}