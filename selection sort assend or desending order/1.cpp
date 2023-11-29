#include<iostream>
using namespace std;
int main()
{
    int x, arr[50], i, j, temp, y, z, index;
    cout<<"Enter the Size of Array: ";
    cin>>x;
    cout<<"Enter "<<x<<" Array Elements: ";
    for(i=0; i<x; i++)
        cin>>arr[i];
    for(i=0; i<(x-1); i++)
    {
        z=0;
        y = arr[i];
        for(j=(i+1); j<x; j++)
        {
            if(y<arr[j])
            {
                y = arr[j];
                z++;
                index = j;
            }
        }
        if(z!=0)
        {
            temp = arr[i];
            arr[i] = y;
            arr[index] = temp;
        }
    }
    cout<<endl;
    cout<<"Sorted Array in Descending Order is: ";
    cout<<endl;
    for(i=0; i<x; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
