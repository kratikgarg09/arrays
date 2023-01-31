#include<iostream> 
using namespace std; 

int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+((end-start)/2));
    while (start <= end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }

        //if key is greater then arr[mid] then go to the right part of the array else go to left part of the array

        if (key > arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = (start+((end-start)/2));
    }
    return -1;
}

int main(){ 
    int even[6] ={2,3,4,5,6,7};
    int odd[7] ={1,5,7,9,12,36,65};
    int index = binarySearch(even,6,0) ;
    cout<<index<< endl;
    int indexOdd = binarySearch(odd,7,12) ;
    cout<<indexOdd<< endl;

    return 0;
}