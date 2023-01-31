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

int getMin(int arr[],int size){

    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
            mini = min(mini,arr[i]);
        // if (arr[i]<min){
        //     min = arr[i];
        // }
    }
    
    return  mini;
}

int getMax(int arr[],int size){
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi,arr[i]);
        // if (arr[i] > max){
        //     max = arr[i];
        // }
    }

    return  maxi;
}

int main(){ 
    int n;
    cin>>n;
    int arr[100];
    
    takeValue(arr,n);
    cout<<getMin(arr,n)<<endl;
    cout<<getMax(arr,n)<<endl;
    
    return 0;
}  