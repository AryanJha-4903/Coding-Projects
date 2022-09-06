int binarySearch(int *input, int n, int val)
{
    int start=0;
    int end=n;
    while(true){
        int mid=(start+end)/2;
        if(input[mid]==val){
            return mid;
        }
        if(input[mid]>val){
            end=mid-1;
        }
        if(input[mid]<val){
            start=mid+1;
        }
        if(start>end){
            return -1;
        }
    }
}
