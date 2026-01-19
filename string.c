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