#include <iostream>
#include <cmath> 
using namespace std;

void swap(int &f, int &h) {
    f = f + h;
    h = f - h;
    f = f - h;
}

double volume(int r) {
    double pi = 3.141; 
    double result = pow(r, 3); 
    double v = (4.0 / 3.0) * pi * result;
    return v;
}

int main() {
    int a = 8;
    int b = 10;
    swap(a, b);
    cout << a << " " << b << endl;

    int r;
    cout << "Enter radius: ";
    cin >> r;

    double v = volume(r);
    cout << "Volume is " << v << endl;

    //*5.Write a program in C++ to merge two arrays.
    // a.Create array1 and array2 and merge both arrays into array3
    // b.Create a function (mergeArray) to combine two arrays*

    
    int sizeOne;
    cout << "Enter the size of first array: ";
    cin >> sizeOne;
    int sizeTwo; 
    cout << "Enter the size of the second array: ";
    cin >> sizeTwo;
    int sum;
    sum = sizeOne + sizeTwo;
    int arr1[sizeOne];
    cout << "Enter " << sizeOne << " elements in array one: "<<endl;
    for(int i =0; i<sizeOne; i++)
        cin >> arr1[i];
    int arr2[sizeTwo]; 
    cout << "Enter " << sizeTwo<< " elements in array two: "<< endl;
    for(int i= 0; i < sizeTwo; i++)
        cin >> arr2[i];
    int mergedArr[sum];
    for(int i = 0; i < sizeOne; i++)
        mergedArr[i] = arr1[i];
    for( int i = 0; i< sizeTwo; i++)
        mergedArr[sizeOne + i] = arr2[i];
    for(int i =0 ; i < sum; i++)
        cout<< mergedArr[i];
      return 0;
    
}

