#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        int minIndex = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> arr = {13,46,24,52,20,9};
    cout << endl;
    cout << "Before selection sort: " ;
   for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    selectionSort(arr);

    return 0;
}