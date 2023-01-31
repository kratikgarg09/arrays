#include<iostream> 

using namespace std; 

void takeValue(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout <<"enter the variable for  " <<i+1<<"th index"<< endl;   
        cin>>arr[i];
    }
    cout<<endl;
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

void arrayReversal(int arr[],int size){
    
    // for (int i = 0; i <= size-1; i++)
    // {
    //     swap(arr[i],arr[size-1]);
    //     size = size-2;
    // }

    int start = 0,end = size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        /*
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[size-i];
        arr[size-i] = temp;
        */
        start++;
        end--;
    }
    
}

int main(){ 
    int arr[1000], n;
    cin>>n;
    takeValue(arr,n);

    cout<<"befor rersal"<<endl;
    printArray(arr,n);

    arrayReversal(arr,n);

    cout<<"after reversal"<< endl;
    printArray(arr,n);

    return 0;
}