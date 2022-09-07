//question link:https://www.hackerrank.com/challenges/insertionsort1/problem

void insertionSort1(int n, vector<int> arr) {
    int x = arr[n-1];
    for(int i=n-2; i>=-1; i--){
        if(arr[i] > x){
            arr[i+1]=arr[i];
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            arr[i+1]=x;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
        
    }
}