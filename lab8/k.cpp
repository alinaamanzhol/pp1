#include <iostream>
#include <vector>

#include <stack>
using namespace std;

int largestRectangleArea(vector<int> &histogram)
{
    stack<int> s;
    int maxArea = 0;

    int i = 0;

    while(i < histogram.size())
    {
       if(!stack.empty() || histogram.at(i) >= histogram.at(s.top()))
       {
          s.push(i);
          i++;
       }
       else
       {
        int TopIndex = s.top();
        s.pop();

        int width;
        if(s.empty()) width = i;
  
          width = i - s.top() - 1;
          maxArea = max(maxArea, histogram.at(TopIndex) * width);
        }
       }
       while(!s.empty())
       {
        int TopIndex = s.top();
        s.pop();
        int width = s.empty ? i : i - s.top() - 1;
        maxArea = max(maxArea, histogram.at(TopIndex) * width);

       }
    }
}

int main(){

     int n;
     cin >> n;

     vector<int> heights;
    
    for(int i = 0; i < n; i++)
    {
       int a;
       cin >> a;
       heights.push_back(a);
    }

    int area = largestRectangleArea(heights);
    




    return 0;
}