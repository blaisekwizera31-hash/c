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