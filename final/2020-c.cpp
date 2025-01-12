#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> colors(n);
    for(int i=0; i<n; i++){
        cin>>colors[i];
    }
    int max = colors[0];
    int ind = 0;
    for(int i=0; i<n; i++){
        if(max<colors[i]){
            max=colors[i];
            ind=i;
        }
    }
    int count = 1;
    int l = n - ind+1;
    int end = colors[n-1];
    for(int i = 0; i<l; i++){
        if(end<colors[n-1-i]){
            end=colors[n-1-i];
            count++;
        }
    }
    cout<<count;
}