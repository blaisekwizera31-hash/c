#include <stdio.h>

int main(){
    char name[50];
    printf
    ("Enter your name: ");
    scanf("%s", &name);
    printf("Hello, %s!\n", name);
    return 0;
}

#include <stdio.h>
int main(){
	char name[30];
	printf("Enter name: ");
	gets(name);
	puts(name);
//	printf("\n");
}
#include <stdio.h>
int main(){
	char name[30];
	printf("Enter name: ");
	gets(name);
	puts(name);
//	printf("\n");

}

#include <stdio.h>
#include <string.h>
int main(){
	int array1[9] = {10, 12, 13, 14};
	int array2[9];
	for(int i=0; i<4; i++){
	   array2[i] = array1[i];	
	}
    for(int i=0; i<4; i++){
    printf("%d\n", array2[i]);
 	}
}
#include <stdio.h>
int main(){
	int array[9];
	printf("Enter the any numbers of the array: ");
	for(int i = 0; i<5; i++){
	    scanf("%d", &array[i]);	
	}
	for(int i=0; i<5; i++){
	    printf("%d", array[i]);
	}
	
	for( int i=4;   i>0; i--){
		printf("%d\n", array[i]);
	}
		
return 0;
}

#include <stdio.h>
int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    int newarray[10];
    for ( int i=0; i<6; i++){
        if( i == 0){
            newarray[i]= array[i]+ array[i+1];
       
        }
        else if( i == 5){
            newarray[i]= array[i] +array[i-1];
            
        }
        else {
            newarray[i]= array[i-1] +array[i+1];
            
        }
        printf("%d\n", newarray[i]);
    }
    return 0;
}

#include <stdio.h>

int main(){

    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int r, c;
    int product;

    for (r = 0; r < 3; r++){
        for (c = 0; c < 3; c++){
            product = array[0][1] * array[0][2] * array[1][2];
        }
    }

    printf("The product is %d", product);

    return 0;
}
