#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int target;
    cout << "enter target number: ";
    cin >> target;
    int arr[n];
    cout <<"enter arr element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if((arr[i] + arr[j]) == target){
                cout << arr[i] << " and " << arr[j];
                break;
            }
        }
    }
    return 0;
}