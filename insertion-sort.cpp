#include <iostream>

using namespace std;

int main()

{

    int arr[6]={6,5,2,3,1,10};

    cout<<"The array before sorting"<<endl;

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" " ;
    }

    for(int i=0;i<6;i++)
    {
        int temp=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>=temp)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;
    }

    cout<<"The array after sorting"<<endl;

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

}
