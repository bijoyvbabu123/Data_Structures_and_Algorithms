#include<iostream>

using namespace std;

int LinearSearch(int array[], int size, int target) {
    /* this is the code segment for linear search. It returns the index if the target is present.
    It will return -1 if the target is not present */

    // length = sizeof(array) / sizeof(int)
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(int)<<endl;

    for(int index=0; index<size; index++)
        if(array[index]==target)
            return index;
    return -1;
}

int main() {
    cout<<"enter number of elements in the array : ";
    int size;
    cin>>size;

    int array[size];

    cout<<"enter the elements"<<endl;
    for(int index=0; index<size; index++)
        cin>>array[index];
    
    cout<<"enter the element to search : ";
    int target;
    cin>>target;

    int result = LinearSearch(array, size, target);

    if(result == -1)
        cout<<"target is not found"<<endl;
    else 
        cout<<"target is found at index "<<result<<endl;
}