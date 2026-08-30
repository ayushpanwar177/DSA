/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** answer=(char**)malloc(n * sizeof(char*));
    *returnSize=n;
    for(int i=0;i<n;i++){
        int num=i+1;
        if(num%3==0 && num%5==0){
            answer[i]="FizzBuzz";
        }
        else if(num%3==0){
            answer[i]="Fizz";
        }
        else if(num%5==0){
            answer[i]="Buzz";
        }
        else{ answer[i]=(char*)malloc(12);
        sprintf(answer[i],"%d",num);
    }
    }
    return answer;
}
