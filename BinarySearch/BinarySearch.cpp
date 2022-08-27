#include<iostream>

using namespace std;


int BinarySearch(int array[], int size, int target) {
    /* this  is the code segement for binary search. It returns the index if the target is found.
    It will return -1 if the target is not present.
    */

    int start = 0;
    int end = size-1;
    int mid;

    while(start<=end) {
        mid = start + (end - start) / 2;

        if(target == array[mid])
            return mid;
        else if(target > array[mid])
            start = mid+1;
        else 
            end = mid-1;
    }

    return -1;

}

int main() {
    cout<<"enter number of element in the array : ";
    int size;
    cin>>size;

    int array[size];

    cout<<"enter the elements : "<<endl;
    for(int index=0; index<size; index++)
        cin>>array[index];
    
    cout<<"enter the element to search : ";
    int target;
    cin>>target;

    int result = BinarySearch(array, size, target);

    if(result == -1)
        cout<<"target not found"<<endl;
    else
        cout<<"target found at index "<<result<<endl;

    return 0;
}