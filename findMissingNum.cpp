#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int arr[n - 1];
    cout << "enter elements: ";

    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }

    int pridectedSum = (n * (n + 1)) / 2;
    
    int actualSum = 0;
    for(int i = 0; i < n - 1; i++){
        actualSum += arr[i];
    }

    int missingNum =pridectedSum - actualSum;
    cout << "missing num: "<< missingNum;
    return 0;
}