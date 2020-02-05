/*a / Write a C++ program to sort an array of elements using the Bubble sort algorithm
b / Write a C++ program to sort an array of elements using the Heapsort algorithm
c / Write a C++ program to sort an array of elements using the Quicksort algorithm
d / Write a C++ program to sort an array of elements using the Mearge sort algorithm
*/
#include <iostream>
using namespace std;
void input(int arr[], int n);
void bubbleSort(int arr[], int n);
void output(int arr[], int n);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
int main()
{
    int a[100];
    int n;
    cin >> n;
    input(a, n);
    //bubbleSort(a, n);
    //heapSort(a, n);
    //quickSort(a, 0, n - 1);
    mergeSort(a, 0, n - 1);
    output(a, n);
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j],arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root 
    int l = 2 * i + 1; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 

    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root 
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap 
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end 
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap 
        heapify(arr, i, 0);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element 
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i + 1],arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[10], R[10];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;  
    j = 0; 
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}