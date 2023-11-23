// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"harsh","anurag","aditya","vivek","himanshu"};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        // traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false;
            }
            
        }
        if(flag == true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
