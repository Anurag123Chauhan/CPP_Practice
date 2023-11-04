// #include <bits/stdc++.h>
// using namespace std;

// struct Task {
//     int priority;
// };

// void swap(Task& a, Task& b) {
//     Task temp = a;
//     a = b;
//     b = temp;
// }

// void insertTaskPriority(Task heap[], int& heapSize, Task newTask) {
//     // Insert the new task at the end of the heap.
//     int i = heapSize;
//     heap[heapSize++] = newTask;

//     // Restore the min heap property by moving the new task up the heap.
//     while (i > 0 && heap[i].priority < heap[(i - 1) / 2].priority) {
//         swap(heap[i], heap[(i - 1) / 2]);
//         i = (i - 1) / 2;
//     }
// }

// void printHeap(Task heap[], int heapSize) {
//     for (int i = 0; i < heapSize; i++) {
//         cout << heap[i].priority << " ";
//     }
//     cout << endl;
// }

// int main() {
//     Task minHeap[100];
//     int heapSize = 0;

//     while (true) {
//         Task newTask;
//         if (!(cin >> newTask.priority)) {
//             break;
//         }
//         insertTaskPriority(minHeap, heapSize, newTask);
//         // printHeap(minHeap, heapSize);
//     }
//     printHeap(minHeap,heapSize);

//     return 0;
// }
// Insert in max heap

// #include <iostream>
// using namespace std;

// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void insertTask(int heap[], int& heapSize, int newTask) {
//     //Write your code here
//     int i=heapSize;
//     heap[heapSize++]=newTask;
    
//     while(i>0 && heap[i]> heap[(i-1)/2]){
//         swap(heap[i],heap[(i-1)/2]);
//         i=(i-1)/2;
//     }
// }
// void printHeap(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main() {
//     int maxHeapSize = 100;
//     int maxHeap[maxHeapSize];
//     int heapSize = 0;

//     while (true) {
//         int newTask;
//         if (!(cin >> newTask)) {
//             break;
//         }

//         if (heapSize < maxHeapSize) {
//             insertTask(maxHeap, heapSize, newTask);
//         } else {
//             cout << "Heap is full, cannot insert more tasks." << endl;
//             break;
//         }
//     }

//     printHeap(maxHeap, heapSize);

//     return 0;
// }

// deletion question

// #include <bits/stdc++.h>
// using namespace std;

// #define MAX_SIZE  100 

// void heapify(int arr[], int n, int i)
// {
//     //Type your code
//     int s=i;
//     int lc=2*i+1;
//     int rc=2*i+2;
    
//     if(lc<n && arr[lc]>arr[s]){
//         s=lc;
//     }
//     if(rc<n && arr[rc]>arr[s]){
//         s=rc;
//     }
//     if(s!=i){
//         swap(arr[s],arr[i]);
//         heapify(arr,n,s);
//     }
// }

// void buildMaxHeap(int arr[], int n) {
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
// }

// int extractMax(int arr[], int& n) 
// {
//     //Type your code
//     int last=arr[n-1];
//     int root=arr[0];
//     arr[0]=arr[n-1];
//     n=n-1;
//     heapify(arr,n,0);
//     return root;
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";
// }

// int main() {
//     int n;
//     cin >> n;


//     int arr[MAX_SIZE];
//     for (int i = 0; i < n; ++i)
//         cin >> arr[i];

//     buildMaxHeap(arr, n);

//     int maxElement = extractMax(arr, n);
//     if (maxElement != -1) {
//         cout << maxElement << endl;
//     }

//     printArray(arr, n);

//     return 0;
// }

// heap sort

// You are using GCC
// #include <iostream>
// #include <string>
// using namespace std;

// void heapify(string arr[], int n, int i) {
//     //Type your code here
//     int s=i;
//     int lc=2*i+1;
//     int rc=2*i+2;
    
//     if(lc<n && arr[lc]>arr[s]){
//         s=lc;
//     }
//     if(rc<n && arr[rc]>arr[s]){
//         s=rc;
//     }
//     if(s!=i){
//         swap(arr[s],arr[i]);
//         heapify(arr,n,s);
//     }
// }

// void heapSort(string arr[], int n) {
//     for(int i=n/2+1;i>=0;i--){
//         heapify(arr,n,i);
//     }
//     for(int i=n-1;i>=0;i--){
//         swap(arr[0],arr[i]);
//         heapify(arr,i,0);
//     }
// }

// int main() {
//     int size;
//     cin >> size;

//     string arr[size];
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     heapSort(arr, size);

//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// ghatiya question

// You are using GCC
// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i)
// {
//     //Type your code
//     int s=i;
//     int lc=2*i+1;
//     int rc=2*i+2;
//     if(lc<n && arr[lc]>arr[s]){
//         s=lc;
//     }
//     if(rc<n && arr[rc]>arr[s]){
//         s=rc;
//     }
//     if(s!=i){
//         swap(arr[s],arr[i]);
//         heapify(arr,n,s);
//     }
// }

// void buildMaxHeap(int arr[], int n) {
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }
// }

// void deleteGreaterThanpoint(int arr[], int& n, int threshold) {
//     int newSize = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] <= threshold) {
//             arr[newSize] = arr[i];
//             newSize++;
//         }
//     }
//     n = newSize;
// }

// void displayHeap(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int n;
//     int threshold;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     buildMaxHeap(arr, n);

//     cin >> threshold;

//     deleteGreaterThanpoint(arr, n, threshold);

//     displayHeap(arr, n);

//     return 0;
// }

// IMP
#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}
void deleteEvenElements(int arr[], int& n) {
    int i, j;
    int evenCount = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == 0) {
        return;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[n - 1];
            n--;

            buildMaxHeap(arr, n);
            i--;
        }
    }
}

void displayHeap(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    buildMaxHeap(arr, n);

    deleteEvenElements(arr, n);

    displayHeap(arr, n);

    return 0;
}