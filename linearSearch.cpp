#include<iostream> 

using namespace std; 

bool search(int arr[],int size,int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int linearSearch(int arr[],int size,int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main(){ 
    int arr[45] = { 7, 8, 9, 13, 2, 3, 334, 4, 534, 4, 654, 665, 76, 4545};
    int key;
    cin>>key;
    bool found = search(arr,45,key);
    if (found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is absent";
    }
    cout<<endl;
    int index = linearSearch(arr,45,key);
    cout << index <<endl;
    return 0;
}