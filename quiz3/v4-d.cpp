#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){

    vector<string> s;

    string odezhda;

    while(cin >> odezhda)
    {
        s.push_back(odezhda);
    }

    set<string> clothes;
    
    bool turn = true; //Aida
    for(int i = 0; i < s.size(); i++)
    {
        if(!clothes_count(s.at(i)))
        {
            if(turn)
            {
                cout << "Aida" << endl;
                cout << s.at(i) << endl;
            }
            else
            {
                cout << "Aizhan" << endl;
                cout << s.at(i) << endl;
            }
            turn = !turn;
        }
    }
    

    return 0;
}