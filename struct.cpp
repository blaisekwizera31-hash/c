#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char lname[30];
    char fname[30];
    char gender[90];
    int age;
};

void receiveInput(struct Student * s){
	
	printf("Enter id: ");
	scanf("%d", &s ->id);
	
	printf("Enter lname: ");
	scanf("%s", s ->lname);
	
	printf("Enter fname: ");
	scanf("%s", s ->fname);
	
	printf("Enter gender: ");
	scanf("%s", s ->gender);
	
	printf("Enter age: ");
	scanf("%d", &s ->age);
	

};

void outputData (struct Student * s){
	printf("%d\n", s -> id);
	printf("%s\n", s -> lname);
	printf("%s\n", s -> fname);
	printf("%s\n", s -> gender);
	printf("%d\n", s -> age);
	
	
	
}

int main(){
	struct Student RCA;
    receiveInput(&RCA);
    outputData(&RCA);
    
    return 0;
}