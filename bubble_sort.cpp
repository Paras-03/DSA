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

void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubble_sort(arr, n);

    cout<<"\nValues after sorting: ";
    display_values(arr, n);
}