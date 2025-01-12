#include<iostream>
#include<vector>


using namespace std;

int main()
{
    int n;
    cin >> n;


    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int quantity;
    cin >> quantity;

    for(int i = 0; i < quantity; i++)
    {
        int left, right;
        cin >> left >> right; 

        int maxHeight, NumberOfPillars;
        maxHeight = 0;
        NumberOfPillars = 0;


        for(int j = left; j <= right; j++)
        {
            if(v.at(j) > maxHeight)
            {
                NumberOfPillars++;
                maxHeight = v.at(j);
            }
        }
        cout << NumberOfPillars << endl;
    }
 

    return 0;
}