#include <stdio.h>

int sum_array(int *array, int size) {  
    int sum = 0;                        

    for (int p = 0; p < size; p++) {   
        sum = sum + array[p];
    }

    return sum;                         
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int value = sum_array(array, size);
    printf("The sum of the array is %d", value);
    return 0;
}