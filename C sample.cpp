#include <stdio.h>


int main(){




int numbers[3] = {3, 4, 5};

int a = numbers[0];
int b = numbers[1];
int c = numbers[2];  

if (c * c == a * a + b * b) {
    printf("Pythagorean triplet\n");
} else {
    printf("Not a Pythagorean triplet\n");
}
}