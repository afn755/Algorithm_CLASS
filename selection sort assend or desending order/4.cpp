#include<iostream>
using namespace std;
class CodesCracker
{
    public:
        void selSort(int [], int);
};
void CodesCracker::selSort(int arr[], int tot)
{
    int i, j, temp, small, chk, index;
    for(i=0; i<(tot-1); i++)
    {
        chk=0;
        small = arr[i];
        for(j=(i+1); j<tot; j++)
        {
            if(small<arr[j]) //(<or> depends on ascend or discending)
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
}
int main()
{
    CodesCracker c;
    int tot, arr[50], i;
    cout<<"Enter the Size of Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    c.selSort(arr, tot);
    cout<<"\nSorted Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
