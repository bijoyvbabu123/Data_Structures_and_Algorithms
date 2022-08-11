// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

// function to check if the number contains even number of digits
bool ContainsEvenNumberOfDigitsDivisionMethod(int element) {
    // we should consider the edge case : if element is 0 in first place itself
    int count = 0;
    do {
        count++;
        element/=10;
    }while(element!=0);

    // this method is also correct
    /*
    int count = 1;
    while(element/10 != 0) {
        count++;
        element /= 10;
    }
    */

    return (count%2 == 0);
    
}

bool ContainsEvenNumberOfDigitsLogMethod(int element) {
    // log of 0 and -1 is not defined
    if(element) {
        if(element<0) element = element*-1;
        int count = ( ((int)log10(element)) + 1 );
        return(count%2 == 0);
    }

    return false;
}

int main() {
    vector<int> num;

    cout<<"enter number of elements : ";
    int size;
    cin>>size;

    cout<<"enter the elements : "<<endl;
    int temp;
    for(int i=0; i<size; i++){
        cin>>temp;
        num.push_back(temp);
    }

    // this is for printing the elements of the vector
    // cout<<"printing the elements : "<<endl;
    // for(auto index=num.begin(); index != num.end(); index++) {
    //     cout<<*index<<"   ";
    // }
    // cout<<endl;

    // cout<<"size of the vector is : "<<num.size()<<endl;


    int count = 0;
    for(int i: num) {
        // temp = i;
        if(ContainsEvenNumberOfDigitsDivisionMethod(i)) {
            count++;
            cout<<i<<"    ";
        }
    }
    cout<<endl<<"number of even digited numbers : "<<count<<endl;

    count = 0;
    for(int i: num) {
        // temp = i;
        if(ContainsEvenNumberOfDigitsLogMethod(i)) {
            count++;
            cout<<i<<"    ";
        }
    }
    cout<<endl<<"number of even digited numbers : "<<count<<endl;
}