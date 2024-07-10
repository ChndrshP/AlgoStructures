#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> arr){
    for(int i = arr.size() - 1; i >= 0; i--){
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: " ;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    vector <int> Myarr = {13,46,24,52,20,9};
    cout << endl;
    cout << "Before bubble sort: " ;
    for (int i = 0; i < Myarr.size(); i++) {
        cout << Myarr[i] << " ";
    }
    cout << "\n";
    bubbleSort(Myarr);

    return 0;
}