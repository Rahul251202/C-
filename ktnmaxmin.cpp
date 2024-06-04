#include<iostream>
using namespace std;

int kthSmallest(int arr[], int N, int K)
{
	
	return arr[K - 1];
}

void sort(int arr[],int N){
      
      for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++) { if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
		cout<<arr[i]<<" ";
    }
    
}

int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]), K = 3;

	sort(arr,N);
	cout << "K'th smallest element is "
		<< kthSmallest(arr, N, K);
	return 0;
}



