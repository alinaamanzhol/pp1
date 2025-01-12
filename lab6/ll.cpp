#include <iostream> 
#include <string> 
 
using namespace std; 
 
void validstring(string s, int num)  
{ 
    int cnt = 0; 
 
    for (int i = 0; i < s.length(); i++) 
    { 
        if (isdigit(s[i]))  
        { 
            cnt++; 
            if (cnt >= num)  
            { 
                cout << "Valid" << endl; 
                return; 
            } 
        }  
        else  
        { 
            cnt = 0;  
        } 
    } 
 
    cout << "Not valid" << endl; 
} 
 
int main() { 
    string s; 
    int num; 
 
    cin >> s >> num; 
 
    validstring(s, num); 
 
    return 0; 
}