#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int cnt2 = 0; // Count of words with exactly 3 vowels

    while(ss >> word) 
    { 
        int cnt = 0;

        // Count vowels in the current word
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] == 'a' || word[i] == 'o' || word[i] == 'e' || word[i] == 'i' || word[i] == 'u') {
                cnt++;
            }
        }

        // Check if the word has exactly 3 vowels
        if(cnt == 3)
        {
            cnt2++;
            reverse(word.begin(), word.end()); // Reverse the word
            cout << word << endl; // Output the reversed word
        }
    }

    // Output the count of words with exactly 3 vowels
    cout << cnt2 << endl;

    return 0;
}
