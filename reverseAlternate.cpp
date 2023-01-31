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

void reverseAlternate(int arr[] , int size){
    for (int i = 0; i < size; i+=2)
    {
        if ((i+1) < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
}

int main(){ 
    int arr[1000], n;
    cin>>n;
    takeValue(arr,n);

    cout<<"befor rersal"<<endl;
    printArray(arr,n);

    reverseAlternate(arr,n);

    cout<<"after reversal"<< endl;
    printArray(arr,n);
    return 0;
}