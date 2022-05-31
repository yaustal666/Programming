// Just bubble-sort (with a flag)
// 
// yaustal666

void bubble_sort(int* arr, int len){
    for (int i = 0; i < len - 1; i++)
    {
        int flag = 0;

        for (int j = 0; j < len - 1 - i; j++)
            if(arr[j] > arr[j + 1]) {

                // swap(arr[i], arr[j]);
                int k = arr[j];
                arr[j] = arr[i];
                arr[i] = k;

                flag++;
            }

        if(!flag) break;
    }
    
}