# include <iostream>
using namespace std;

void get_values(int arr[], int n)
{
    cout<<"";
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp ; 
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for(int j=left; j<right; j++)
    {
        if (arr[j]< pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, right);
    return i+1;
}

void quick_sort(int arr[], int left, int right)
{
    if(left<right)
    {
        int part = partition(arr, left, right);
        quick_sort(arr, left, part-1);
        quick_sort(arr, part+1, right);
    }
}

void display_values(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}

int main()
{
    int n;
    cout<<"Enter no of total elements: ";
    cin>>n;

    int arr[n];

    get_values(arr, n);

    cout<<"\nValues before sorting: ";
    display_values(arr, n);

    quick_sort(arr, 0, n-1);

    cout<<"\nValues after sorting: ";
    display_values(arr, n);
}