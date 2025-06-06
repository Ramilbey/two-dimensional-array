#include <iostream>
using namespace std; 

void insertionSort(int arr[], int n){
    for(int i = 1; i< n; i ++){
        int temp = arr[i];
        int j; 
        for (j = i; j> 0 && temp < arr[j-1]; j--) // use && so that loop automaticly stops
            arr[j] = arr[j-1];
        arr[j] = temp;
        //  for(int i = 0; i <n-1; i ++){ another way doing instead of &&
        // int temp = arr[i];
        // int j;
        // for(j = i; j > 0 ; j--){
        //     if(temp < arr[j -1])
        //         arr[j] = arr[j-1];
        //     else
        //         break;
        // }
        // arr[j] = temp; 
    }
}

void print( int a[], int n){
    for( int i =0; i < n; i++)
        cout<< a[i] << " ";
    cout << endl;
}

int main() {
    int n = 9;
    int arr[n] = {5,3,2,1,6,7,8,9,4};
    print(arr, n);
    insertionSort(arr, n);
    print(arr, n);
    return 0;
}
