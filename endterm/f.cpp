#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
int main(){

    string text;
    getline(cin, text);


    stringstream ss(text);

    string word;

    int max = 0;
    string longest;

    while(ss >> word)
   {
       if(word.size() > max)
      {
          max = word.size();
          longest = word;
      }
   }
   cout << longest;

   

    return 0;
}