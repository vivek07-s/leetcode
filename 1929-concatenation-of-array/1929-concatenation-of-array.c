/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* arr, int n, int* returnSize) {
    int *ans=(int*)malloc(2*n* sizeof(int));
    int i;
    for(i=0;i<n;i++){
        ans[i]=arr[i];
        ans[i+n]=arr[i];
    }
    *returnSize = 2 * n;
    return ans;
}