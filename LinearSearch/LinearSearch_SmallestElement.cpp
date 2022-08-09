#include <iostream>

using namespace std;

int LinearSearch_SmallestElement(int array[], int size) {
    // assuming the array is not empty
    int smallest = array[0];
    for(int index=0; index<size; index++)
        if(array[index] < smallest)
            smallest = array[index];
    return smallest;
}

int main() {
    cout<<"enter number of elements in the array : ";
    int size;
    cin>>size;

    int array[size];

    cout<<"enter the elements"<<endl;
    for(int index=0; index<size; index++)
        cin>>array[index];

    int result = LinearSearch_SmallestElement(array, size);

    cout<<"Smallest element is : "<<result<<endl;
}