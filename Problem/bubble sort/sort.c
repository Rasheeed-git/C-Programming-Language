#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>


void sort(int array[], int size){
	
	int i;
    for(i=0; i < size-1; i++){
    	int j;
        for (j=0; j < size-i-1; j++)
        {
           if(array[j] < array[j+1]){
            int temp= array[j];
            array[j] =array[j + 1];
            array[j + 1] = temp;
           }

        }
        
    }
}

void printArray(int array[], int size){
	int i;
    for(i = 0; i<size; i++){
        printf("%d", array[i]);
    }
}


int main(){

    int array[]= {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size= sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}
