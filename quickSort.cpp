//choose a pivot element
//elements smaller than pivot go to left
// elements bigger than pivot go to right
//recorsively sort left and right parts
#include <iostream> 
using namespace std;
//Patrition array
int partition(int arr[], int first, int last){
  int pivot = arr[first];//choose the first element of the pivot 

  // Initially, everything except the pivot is in the unknown region
  int lastS1 = first; // index of last item is S1 (less than pivot)
  int firstUnknown = first+1; // index of first item in unknown region

   // Move items from unknown to proper region one by one
  for(; firstUnknown <= last; ++firstUnknown){
      // Invariant:
      // theArray[first+1..lastS1] < pivot
      // theArray[lastS1+1..firstUnknown-1] >= pivot
    if(arr[firstUnknown] < pivot){
      // belongs to S1
      ++lastS1;
      swap(arr[firstUnknown], arr[lastS1]);
    }// else it stays in S2 (greater than or equal to pivot)
  }
     // Put pivot in its proper position (between S1 and S2)
   swap(arr[first], arr[lastS1]);

   return lastS1; // Return index of the pivot
}
void quickSort(int arr[], int first, int last){
    if(first< last){
        int pivotIndex = partition(arr, first, last);
        quickSort(arr, first, pivotIndex-1);
        quickSort(arr, pivotIndex+1, last);
    }
}

void printArray(int arr[], int n){
  for(int i = 0; i <n; i++)
    cout<< arr[i]<< " ";
  cout << endl;
}

int main (){
  int arr[] = {4,5,6,7,8,1,2,3,9};
  int n = 9;

  cout << "Before quickSort" << endl;
  printArray(arr, n);

  cout << "After quickSort" << endl;
  quickSort(arr, 0 , n-1);
  printArray(arr, n);

  return 0; 
}
