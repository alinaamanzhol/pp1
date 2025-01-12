#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){

    int n;
    cin >> n;

    stack<int> shop;
    vector<int> sold;

    for(int i = 0; i < n; i++)
    {
        int candies;
        cin >> candies;
        
        if(candies > 0)
        {
            shop.push(candies);

        }
        else if(candies == 0 && !shop.empty())
        {
            sold.push_back(shop.top());
            shop.pop();
        }
    }
    
    if(sold.empty()) cout << "-1";
    else 
    {
        for(int i = 0; i < sold.size(); i++)
        {
            cout << sold.at(i) << " ";
        }
    }

    return 0;
}