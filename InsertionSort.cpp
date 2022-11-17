#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n);
int main()
{
    int *arr;
    int n;
    cout << "How many elements you want to enter?"<<endl;
    cin >> n;
    arr = new int[n];
    cout<< "Enter the elements now"<< endl;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    InsertionSort(arr,n);
    cout<<"Sorted Array:"<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i]<<endl;

}
void InsertionSort(int *arr, int n)
{
    int key;
    for (int step = 1; step < n; step++)
    {
        key = arr[step];
        int j = step - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
