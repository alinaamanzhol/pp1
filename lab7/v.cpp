#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){
    int n;
    cin >> n;

    map<string, string> document;

    for(int i = 0; i < n; i++)
    {
        string key;
        string command;
        cin >> key >> command;

       if(command == "get")
       {
          if(document.find(key) != document.end())
          {
            cout << document[key] << endl;
          }
          else{
        cout << "KE: no key " << key << " found in the document";
       }
       } 

       else if(command == "set")
       {
          string value;
          cin >> value;
          document[key] = value;
       }
       
    }

    return 0;
}