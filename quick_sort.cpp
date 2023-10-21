#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
int partition(int arr[],int low,int high){
  int pivot=arr[high];
  int i=low-1;
  for(int j=low;j<high;j++){
    if(arr[j]<=pivot){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);
  return (i+1);
}
void quickSort(int arr[],int low,int high){
  if(low<high){
    int pt=partition(arr,low,high);
    quickSort(arr,low,pt-1);
    quickSort(arr,pt+1,high);
  }
}
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}