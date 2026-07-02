// Trapping rainwater problem

#include <iostream>
using namespace std;

int main(){

    int heights[] ={4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights)/sizeof(heights[0]);

    int leftMax[7], rightMax[7];
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    for (int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }

    for (int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }

    int waterTrapped = 0, currWater=0;

    for (int i=0; i<n; i++){
        currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0){
            waterTrapped += currWater;
        }
    }

    cout << "Water Trapped: " << waterTrapped << endl;

    return 0;
}