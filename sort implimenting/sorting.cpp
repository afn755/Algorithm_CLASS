#include<iostream>
using namespace std;

int main()
{
    //array
    int arr[50];
    int n,i,j;
    int key;

    cout<<"Enter the number of element: ";
    cin>>n;
    cout<<endl;

    for(i=0;i<n;i++)
	{
	    cout<<"Enter element: ";
		cin>>arr[i];
		cout<<endl;
	}

	cout<<"Unsorted Array elements: "<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
		cout<<endl;


	//sorting in order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				key=arr[i];
				arr[i]=arr[j];
				arr[j]=key;
			}
		}
	}

	cout<<"After sorting the array element in ascending order: "<<endl;

	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
		cout<<endl;

return 0;
}
