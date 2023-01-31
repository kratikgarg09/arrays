#include<iostream> 

using namespace std; 

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
    int arr[100];
    int n;
    cin>>n;
    //To initialize the array with value'5'.
    fill_n(arr,n,5);
    //To check the array input (kewaal n hi kari h print)
    printArray(arr,n);
    return 0;
}