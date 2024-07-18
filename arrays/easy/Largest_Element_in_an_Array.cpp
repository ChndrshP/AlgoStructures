// Problem Statement:
// Example 1:
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5
// Explanation:
//  5 is the largest element in the array. 

// Example2:
// Input:
//  arr[] = {8,10,5,7,9};
// Output:
//  10
// Explanation:
//  10 is the largest element in the array. 


#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> arr, int n){
    int num = 0;
    sort(arr.begin(), arr.end());
    num = arr[n-1];
    return num;
}
int main(){
    vector<int> arr1= {8,10,5,7,9};
    int n1 = arr1.size();
    cout << largest(arr1, n1) << endl;

    vector<int> arr2= {2,5,1,3,0};
    int n2 = arr2.size();
    cout << largest(arr2, n2) << endl;
    
    return 0;
}



