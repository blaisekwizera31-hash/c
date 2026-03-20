#include <stdio.h>


int findSum(int newArray[]) {
    int sum = 0;  
    for (int i = 0; i < 5; i++) {
        sum = sum + newArray[i];  }

    return sum;
}

int main(){
	int newArray[5]= {1, 2, 3, 4, 5};

	int value = findSum(newArray);
	printf("The sum of values in an array is:  %d", value);
}