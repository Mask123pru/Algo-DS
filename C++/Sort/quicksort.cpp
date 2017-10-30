#include<iostream>
#include<algorithm>

using namespace std;
int start,end, pindex;

int partition(int A[],int start,int end)
{
int pivot=A[end];
int pindex=start-1;
for(int i=start;i<=end-1;i++)
{
	if(A[i]<=pivot)
	{
	pindex++;
	swap(A[pindex],A[i]);
	}
	
}
swap(A[end],A[pindex+1]);

return(pindex+1);
}

void quicksort(int A[],int start,int end)
{
int q;
	if(start<end)
	{
		q=partition(A,start,end);
		quicksort(A,start,q-1);
		quicksort(A,q+1,end);
	}
}
int main()
{
    int n,A[n];
    cout<<"Enter no of elements:\n";
    cin>>n;
	cout<<"Enter array for quick sort:\n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	quicksort(A,0,n-1);
	cout<<"Sorting using quick sort:\n";
	for(int i=0;i<n;i++)
	{
	cout<<A[i]<<" ";
	}
	return 0;
}
