// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,5,6,4,2,1,6};
    int n = 7;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    // Insertion Sort
    for (int i=1;i<n;i++){
        int j = i;
        while(j>=1 &&  arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Array to integer 
    int x = 0;
    for(int i=0;i<n;i++){
        x *= 10;
        x += arr[i];
    }
    cout<<"Minimum : "<<x<<endl;
    
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    // Array to integer 
    int y = 0;
    for(int i=0;i<n;i++){
        y *= 10;
        y += arr[i];
    }
    cout<<"Second Minimum : "<<y<<endl;
    cout<<"Minimum sum of two array is : "<<x+y;
}

