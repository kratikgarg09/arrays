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

void update(int arr[],int size){
    takeValue(arr,size);
    cout<<"printing the array in update function"<<endl;
    printArray(arr,size);
    cout<<"printing done"<<endl;
}

int main(){ 
    int arr[100] , n;
    cin>>n;
    cout<<"giving the value to the array"<<endl;
    takeValue(arr,n);
    cout<<"printing array in main function before update"<<endl;
    printArray(arr,n);
    cout<<"Now array goes to update function"<<endl;
    update(arr,n);
    cout<<"printing array in main function after update"<<endl;
    printArray(arr,n);
    return 0;
}