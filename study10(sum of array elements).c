#include<stdio.h>
#include<stdlib.h>

//function declaration
float sumArray(float array[], int size){
	float temp;
	int i;
	for(i = 0; i < size; i++){
		temp = temp + array[i];
	}
	return temp;
}

//main function
int main()
{
	int a, i;
	float sum = 0;
	printf("Enter the size of your array: ");
	scanf("%d", &a);
	
	float arr[a];
	printf("Enter the values of your array\n");
	for(i = 0; i < a; i++){
		printf("value %d: ",i+1);
		scanf("%f", &arr[i]);
	}
	
	//function calling
	sum = sumArray(arr,a);
	
	printf("The sum of all the values in your array is : %0.2f", sum);
	return 0;
}
