// Just insertion-sort
// 
// yaustal666

void insert_sort(int* arr, int len){
    for (int i = i; i < len; i++)
        for (int j = i; j > 0 && arr[j] < arr[j-1]; j--){
            
            // swap(arr[j], arr[j-1])
            int k = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = k;
        }
}        