#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"enter n: ";
    cin >> n;
    int arr[n];
    cout <<"enter array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){

        bool alreadyCount =false;
        //check previous elements
        for(int k =0; k <i; k++){
            if(arr[i] == arr[k]){
                alreadyCount = true;
                break;
            }
        }
        //skip if already counted
        if(alreadyCount){
            continue;
        }
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        // print duplicate elements
        if(count > 1){
            cout << arr[i] << "is :"<< count <<endl;
        }
    }
    return 0;
}