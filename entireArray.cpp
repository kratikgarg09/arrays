 // initialising entire array by any value

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

void takeValue(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout <<"enter the variable for  " <<i+1<<"th index"<< endl;   
        cin>>arr[i];
    }
    cout<<endl;
}

void printArraychar(char arr[],int size){
    for (int i = 0; i < size; i++)
    {   
        cout <<arr[i];
        
    }
}

void takeCharvalue(char arr[],int size){
        for (int i = 0; i < size; i++)
    {
        cout <<"enter the character for  " <<i+1<<"th index"<< endl;   
        cin>>arr[i];
    }
}

int main(){ 
    int n;
    cin >> n;
    int arr[n];

    // takeValue(arr,n);
    // printArray(arr,n);
    // int arr_size = sizeof(arr)/sizeof(int);
    // cout<<arr_size;
    
    char ar[5];
    takeCharvalue(ar,n);
    printArraychar(ar ,n);
    return 0;
}