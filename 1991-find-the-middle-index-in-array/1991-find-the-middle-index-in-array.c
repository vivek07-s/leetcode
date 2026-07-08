int findMiddleIndex(int* arr, int n){
    int i;
    int leftsum=0;
    int rightsum=0;
    int totalsum=0;
        for(i=0;i<n;i++){
            totalsum+=arr[i];
        }
            for(i=0;i<n;i++){
                rightsum=totalsum-leftsum-arr[i];
                    if(rightsum==leftsum)
                        return i;
                leftsum+=arr[i];
            }
            return -1;
}