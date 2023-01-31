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

int arraySum(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum+arr[i];
    }
    
    return sum;
}

int main(){ 
    int arr[1000], n;
    cin>>n;
    takeValue(arr,n);
    cout  << arraySum(arr,n);
    return 0;
}