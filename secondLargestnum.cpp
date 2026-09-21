#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"enter n: ";
    cin >> n;
    int arr[n];
    cout << "enter arrays: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largeNum =arr[0];            //store first element
    int secLargeNum =INT_MIN;           //store minimun number
    for(int i = 0; i < n; i++){
        if(arr[i] > largeNum){           // condition for largeNum
            secLargeNum = largeNum;
            largeNum = arr[i];
        }
        else if(arr[i] > secLargeNum){     //condition for second largeNum
            secLargeNum = arr[i];
        }
    }
    cout <<"second large number is: "<< secLargeNum;
    return 0;
}