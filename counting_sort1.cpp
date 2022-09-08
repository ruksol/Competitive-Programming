//question link: https://www.hackerrank.com/challenges/countingsort1/problem

vector<int> countingSort(vector<int> arr) {
    int n = arr.size();
    vector<int> result;
    for(int i=0; i<100; i++){
        result.push_back(0);
    }
    for(int i=0; i<n; i++){
        int x = arr[i];
        result[x]++;
    }
    return result;
}