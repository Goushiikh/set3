#include <iostream>
using namespace std;
int main()
{
    int i, n,j,temp;
    float arr[100];
    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }
   cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	return 0;
}
