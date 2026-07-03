/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* arr, int n, int* returnSize) {
    int* ans=(int*)malloc(n *sizeof(int));
    int i;
    for(i=0;i<n;i++){
        ans[i]=arr[arr[i]];
    }
    *returnSize=n;
    return ans;
}