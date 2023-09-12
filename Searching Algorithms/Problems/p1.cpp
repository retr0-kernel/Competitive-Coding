/*Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1). */

#include <bits/stdc++.h>
using namespace std;
void print3largest(int arr[], int arr_size){
    int first, second, third;
    if(arr_size<3){
        cout<<"Invalid input"<<endl;
        return;
    }
    third = first = second = INT_MIN;
    for(int i=0;i<arr_size;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]!=second && arr[i]!=first){
            third=arr[i];
        }
    }
    cout<<"Three largest elements are "<< first <<" "<<second<<" "<<third<<endl;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr, a);
    return 0;
}

/*Time Complexity of O(n)*/