/*Count Inversions in an array (Using Merge Sort)*/

#include <stdio.h>
int Merge(int arr[], int res[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;
    int inversionCount = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]) 
		{
            res[k++] = arr[i++];
        }
        else
		{
            res[k++] = arr[j++];
            inversionCount += (mid - i + 1); 
        }
    }
    while (i <= mid) {
        res[k++] = arr[i++];
    }
    for (i = low; i <= high; i++) {
        arr[i] = res[i];
    }
    return inversionCount;
}
int MergeSort(int arr[], int res[], int low, int high)
{
	int i;
    if (high == low) {       
        return 0;
    }
    int mid = (low + ((high - low) >> 1));
    int inversionCount = 0;
    inversionCount += MergeSort(arr, res, low, mid);
    inversionCount += MergeSort(arr, res, mid + 1, high);
    inversionCount += Merge(arr, res, low, mid, high);
    return inversionCount;
}
int main()
{
    int i,arr[100],num;
    printf("Enter no of array elements");
    scanf("%d",&num);
    printf("Enter array elements:\n");
    for(i=0;i<num;i++)
    {
    	scanf("%d",&arr[i]);
	}
    int res[num];
    for (i = 0; i < num; i++) {
        res[i] = arr[i];
    }
    printf("The inversion count is %d", MergeSort(arr, res, 0, num - 1));
    return 0;
}
