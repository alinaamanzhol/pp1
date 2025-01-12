#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int n; 
    cin >> n; 
 
    int arr[n][n]; 
 
   if(n % 2 != 0) 
   { 
     for(int i = 0; i < n; i++) 
        { 
            for(int j = 0; j < n; j++) 
            { 
                if(j < (n - i - 1)) 
                { 
                    cout << "."; 
                } 
 
                else  
                { 
                    cout << "#"; 
                } 
            } 
 
            cout << endl; 
        } 
 
   } 
 
   else if(n % 2 == 0) 
   { 
        for(int i = 0; i < n; i++) 
        { 
            for(int j = 0; j < n; j++) 
            { 
                if(j <= i) 
                { 
                    cout << "#"; 
                } 
 
                else  
                { 
                    cout << "."; 
                } 
            } 
 
            cout << endl; 
        } 
   } 
 
 
 
    return 0; 
}