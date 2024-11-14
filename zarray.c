
#include <stdio.h>
int main(){
    int array [10]={1,2,3,4,5,6,7,8,9};
    int max = 0; //max number hold
    int i, a; //floater integers for loops to run. A is entering in digits. I is to do the thing
    //printf("\nEnter 10 numbers. Press enter between each number to register it as a number\n");
    //for(a=0; a<10; a++){
    //    scanf("%d",& array[a]);
    //}
    printf("The elements of the array are \n");
    for(i=0; i<10; i++){
        printf("%d ", array[i]);
        if(max<=array[i]){
            max = array[i];
        } 
        }
    printf("\n\nThe maximum of the array is %d\n\n", max);
    return 0;
}