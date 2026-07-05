/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* arr, int numsSize, int n, int* returnSize){
    int* ans=(int*)malloc(2*n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        ans[2*i]=arr[i];
        ans[2*i+1]=arr[i+n];
    }
    *returnSize=2*n;
    return ans;
}