#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool prime(int &a){
    a=abs(a);
    int count=0;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        if(k==1 || k==0){
            continue;
        }
        nums.push_back(k);
    }
    int count = count_if(nums.begin(), nums.end(), prime);
    cout<<count;
}