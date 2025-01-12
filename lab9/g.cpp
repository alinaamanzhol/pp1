#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

double convert(double score){
    
    if (score >= 95) return 4.0; 
    if (score < 50) return 0.0;  

    int pointsAbove50 = score - 50; 
    double gp = 1.0 + (pointsAbove50 / 5) * (1.0 / 3); 

    return min(gp, 4.0); 
}

int main(){
    int n;
    cin>>n;
    double total_gpa = 0;
    int count_credit = 0;
    for(int i=0; i<n; i++){
        double a1, a2, final;
        int credit;
        cin>>a1>>a2>>final>>credit;
        if(final<20 || a1+a2<30){
            count_credit+=credit;
            continue;
        }
        int total_point = a1+a2+final;
        double gp = convert(total_point);
        total_gpa+=gp*credit;
        count_credit+=credit;
    }
    cout<<total_gpa/count_credit<<endl;

    return 0;
    

}