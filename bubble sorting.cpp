<<<<<<< HEAD
int bubbleSort(int *input, int size)
{
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(input[j]>input[j+1]){
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
    return *input;
=======
int bubbleSort(int *input, int size)
{
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(input[j]>input[j+1]){
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
    return *input;
>>>>>>> 2d2a7f5bdd3e8483c118c8fbdd6b80340b52f307
}