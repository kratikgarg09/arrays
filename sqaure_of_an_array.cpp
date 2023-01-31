#include<iostream> 
#include <vector>
using namespace std; 

void squareArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i]*arr[i];
    }
}

void sort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            swap(arr[i],arr[minIndex]);
        }
    }
}

void printArray(int arr[],int size){
    cout<<" { ";
    for (int i = 0; i < size; i++)
    {   
        cout <<arr[i] <<" ";
        
    }  
    cout<<"}";
    cout<<endl;
}

int main(){ 
    int arr[5] = {-4,-1,0,9,8};
    squareArray(arr,5);
    sort(arr,5);
    printArray(arr,5);
    return 0;
}