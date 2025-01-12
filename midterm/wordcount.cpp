#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    
    getline(cin, sentence); 

    int wordCount = 0;

   
    for (int i = 0; i < sentence.length(); i++) {
        
        if (sentence[i] != ' ' && (i == 0 || sentence[i - 1] == ' ')) {
            wordCount++; 
        }
    }

    cout << wordCount << endl;

    return 0;
}
