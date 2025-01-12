#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main(){

    int numassistants;
    cin >> numassistants;

    map<string, string> studentassistant;

    for(int i = 0; i < numassistants; i++)
    {
        string assistantname;
        int studentcount;
        cin >> assistantname >> studentcount;

        for(int j = 0; j < studentcount; j++)
        {
            string student;
            cin >> student;
            studentassistant[student] = assistantname;
        }
    }

    int cnt1;
    cin >> cnt1;

    for(int i = 0; i < cnt1; i++)
    {
        string studenttofind;
        cin >> studenttofind;

        if(studentassistant.find(studenttofind) != studentassistant.end()) cout << studentassistant[studenttofind] << endl;
        else cout << 'F' << endl;
    }

    return 0;
}
