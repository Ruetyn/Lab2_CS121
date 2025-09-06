/* Algorithm
 * printValues(int* array)
 * 	for int i =0; i < MAX; i++)
 * 		printf("%d", array[i])
 *
 * swap(int* value1, int* value2)
 * 	int temp
 * 	temp = value1
 * 	value1 = value2
 *	value2 = value1
 *
 * sort(int* array)
 * 	for int i = 0; i < MAX; i++:
 *		for int j = 0; j < MAX; j++:
 *			if array[j] > array[j+1]:
 *				swap array[j] with array[j+1]
 *				printValues(array)
 */

#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
       	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
       	printf("Before: \n");
       	printValues(values);

       	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
} // end main
  
void printValues(int* array){
	printf("[");
	for(int i = 0; i < MAX; i++){
		printf("%d ", array[i]);
	} // end for	
	printf("]");
} // printValues

void sort(int* array){
	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			if(array[j] > array[j+1]){
				swap(array + j, array +j +1);
				printValues(array);
				printf("\n");
			} // end if
		} // end for j
	} // end for i
} // end sort

void swap(int* value1, int* value2){
	int temp = *value1;
	*value1 = *value2;
	*value2 = temp;
} // end swap
