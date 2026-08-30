int findSpecialInteger(int* arr, int arrSize) {
    int i,count=1,new=arrSize/4;
    for(i=1;i<arrSize;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count> new)
        return arr[i];

    }
    return arr[0];
    
} 
