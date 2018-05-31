#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort( int *const array,unsigned int size ); //prototype

int main(void) {
	//initialize array a
	int a[SIZE]={1,3,5,7,9,2,4,6,8,10};
	
	unsigned int i; //counter
	
	puts(" Data items in original order");
	    //loop through array a
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
		}//end for
		
		bubbleSort(a, SIZE); //sort the array
		
		puts("\n Data items in ascending order");
		//loop through array a
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
	    }//end for
		
		puts("");
}//end main
