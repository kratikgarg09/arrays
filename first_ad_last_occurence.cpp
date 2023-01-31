#include<iostream> 

using namespace std; 

int firstOcc(int arr[],int n,int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }
        else if (key>arr[mid])
        {
            s = mid+1;
        }
        else if (key<arr[mid])
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    return ans;
}


int lastOcc(int arr[],int n,int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid+1;
        }
        else if (key>arr[mid])
        {
            s = mid+1;
        }
        else if (key<arr[mid])
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    
    return ans;
}

void occ(int arr[],int n,int key)
{
    cout << firstOcc(arr,9,5) << lastOcc(arr,9,5)<<endl;
}

int main(){ 
    int arr[9] = {1,2,3,4,5,5,5,5,7};
    
    occ(arr,9,5);

    // rtotal number of index

    int total_no_of_occurence = (lastOcc(arr,9,5)-firstOcc(arr,9,5))+1;
    cout<<total_no_of_occurence<<endl;

    return 0;
}