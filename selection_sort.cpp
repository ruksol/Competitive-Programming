//question link: https://practice.geeksforgeeks.org/problems/selection-sort/1

int select(int arr[], int i)
{
    return arr[i];
}


void selectionSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        int x = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[x]){
                x = j;
            }
        }
        swap(&arr[x], &arr[i]);
    }
}