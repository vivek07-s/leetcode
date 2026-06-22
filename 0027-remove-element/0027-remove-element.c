int removeElement(int arr[],int n,int m) {
    if(n==0){
        return 0;
    }
    else{
        int i=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=m){
                arr[i]=arr[j];
                i++;
            }
        }
        return i;

    }
    
}