#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<string, string> geog;

    for(int i = 0; i < n; i++)
    {
        string country;
        int number;

        cin >> country >> number;

        for(int j = 0; j < number; j++)
        {
            string city;
            cin >> city;
            geog[city] = country;
        }
    }

    int m;
    cin >> m;

    vector<string> city_types;

    for(int i = 0; i < m; i++)
    {
        string city;
        cin >> city;
        city_types.push_back(city);
    }

    cout << city_types.size() << endl;

    for(int i = 0; i < city_types.size(); i++)
    {
        if(geog.find(city_types.at(i)) != geog.end())
        {
            cout << geog[city_types.at(i)] << endl;
        }
        else 
        {
            cout << "Unknown" << endl;
        }
    }



    return 0;
}