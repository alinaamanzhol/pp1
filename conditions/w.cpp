#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int a, b, c;
   
    cin >> a >> b >> c;
    
   
    int sides[] = {a, b, c};
    sort(sides, sides + 3);
    
    a = sides[0];
    b = sides[1];
    c = sides[2];
    
  
    if (a + b <= c) {
        cout << "impossible" << endl;
    } else {
      
        int a2 = a * a;
        int b2 = b * b;
        int c2 = c * c;
        
        if (a2 + b2 == c2) {
            cout << "right" << endl;  
        } else if (a2 + b2 > c2) {
            cout << "acute" << endl;  
        } else {
            cout << "obtuse" << endl;  
        }
    }
    
    return 0;
}