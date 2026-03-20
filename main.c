//#include <stdio.h>
//
//int main() {
//    int array[5];
//    
//    printf("Please enter 5 numbers separated by spaces: ");
//    for(int i = 0; i < 5; i++){
//        scanf("%d", &array[i]);
//    }
//
//    int j = array[0];  // ? semicolon here
//
//    for(int i = 0; i < 5; i++){
//        printf("%d \n", array[i]);
//    }
//
//    for(int i = 0; i < 5; i++){
//        if(array[i] > j){
//            j = array[i];
//        }
//    }
//
//    printf("The biggest number in what you typed is %d\n", j);
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main(){
//   int result = pow(5, 6);
//   printf("5 power 6 is :%d", result);
//}


//#include <stdio.h>
//int main(){
//	int matrix[3][3]={
//	{ 1, 2, 3},
//	{4, 5, 6},
//	{7, 8, 9}		
//	};
//
//for(int i=0; i<3; i++ ){
//	for(int c=0; c<3; c++){
//		printf("matrix[%d][%d] = %d\n", i, c, matrix[i][c]);
//	}
//	
//}
//return 0;
//}
//	
//	
//}

//#include <stdio.h>
//
//int main() {
//    int grades[5]; 
//
//    printf("Enter grades for 5 students (0-100):\n");
//    for(int i = 0; i < 5; i++) {
//        printf("Student %d: ", i+1);
//        scanf("%d", &grades[i]);
//    }
//
//    printf("\nGrades entered:\n");
//         printf("STUDENTS      MARKS      GRADES \n");
//         printf("------------------------------- \n");
//    for(int i = 0; i < 5; i++) {
//    	
//    	if(grades[i]>=80){
//		 printf("Student  %d   marks: %d  grade A\n", i + 1, grades[i]);
//		}
//       else if(80<=grades[i]>=50){
//         printf("Student  %d   marks: %d  grade B\n", i + 1, grades[i]);
//	   }
//	   else{
//	   	 printf("Student  %d   marks: %d  grade C\n", i + 1, grades[i]);
//	   }
//    }
//    
//    return 0;
//}
//
//
//#include <stdio.h>
//int main(){
//	char names[]
//	printf("Enter your full names: ");
//	scanf("%s", &names);
//	printf("Your names are %s");
//}


//#include <stdio.h>
//
//int main() {
//    int n, i, j;
//
//    printf("Enter number of rows: ");
//    scanf("%d", &n);
//
//    for(i = 0; i < n; i++) {
//        int val = 1;  
//        for(j = 0; j <= i; j++) {
//            printf("%d ", val);
//            val = val * (i - j) / (j + 1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//	int n, i, j;
//	
//	printf("Enter the number of rows: ");
//	scanf("%d", &n);
//	
//	for(i=0; i<n; i++){
//		int val =1;
//		for(j=0; j<=i; j++){
//			printf("%d", val);
//			val = val*(i-j)/(j+1);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

//#include <stdio.h>
//int main(){
//	char name[30];
//	printf("Enter name: ");
//	gets(name);
//	puts(name);
////	printf("\n");
//}

//#include <stdio.h>
//#include <string.h>
//int main(){
//char b[6]="divin";
//char c[34]="ndoli claire";
//////puts(c);
////int length = strlen(c);
//////strlen(c);
//////printf(strlen(c))	;
////printf("%d\n", length);
////char copy = strcpy(b, c);
////printf("%s\n", copy );
//  int compared = strcmp(b, c);
//printf(" %d", compared);
//
//}
//

//#include <stdio.h>
//int main(){
//	int array[9];
//	printf("Enter the any numbers of the array: ");
//	for(int i = 0; i<5; i++){
//	    scanf("%d", &array[i]);	
//	}
//	for(int i=0; i<5; i++){
//	    printf("%d", array[i]);
//	}
//	
//	for( int i=4;   i>0; i--){
//		printf("%d\n", array[i]);
//	}
//		
//return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main(){
//	int array1[9] = {10, 12, 13, 14};
//	int array2[9];
//	for(int i=0; i<4; i++){
//	   array2[i] = array1[i];	
//	}
//    for(int i=0; i<4; i++){
//    printf("%d\n", array2[i]);
// 	}
//}

//#include <stdio.h>
//int main(){
//	
//	int unique[] = numbers[0];
//	int numbers[] = {1, 2, 2, 5, 5};
//	
//}





#include <stdio.h>

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique numbers are: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        // Check how many times arr[i] appears
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // If it appears only once, print it
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}






