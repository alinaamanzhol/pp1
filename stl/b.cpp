#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int num;
    map<int, int> frequency;
    
    vector<int> order;

    while(cin >> num)
    {
        if(frequency.find(num) == frequency.end())
        {
            order.push_back(num);
        }
        frequency[num]++;
    }

    for(vector<int>::iterator it = order.begin(); it != order.end(); it++)
    {
        cout << *it << " " << frequency[*it] << endl;
    }

    return 0;
}