/*
 * p6.c
 *
 *  Created on: 26-Jul-2024
 *      Author: root
 */
#include<stdio.h>
struct student{
    int rno;
    char name[30];
    struct subject{
        int c;
        int cpp;
        int java;
    }sub;
    float sgpa;
};
int main(){
	struct student s[3],temp;
	struct student *p=&s[0];

	int i=0;
	int total;
	for(i=0;i<3;i++){
		printf("Enter the Rno :\n");
		scanf("%d",&(p+i)->rno);

		printf("Enter the Name :\n");
		scanf("%s",(p+i)->name);

		printf("Enter the c_language marks :\n");
		scanf("%d",&(p+i)->sub.c);

		printf("Enter the c++_language marks :\n");
		scanf("%d",&(p+i)->sub.cpp);

		printf("Enter the java_language marks :\n");
		scanf("%d",&(p+i)->sub.java);

		 total = (p+i)->sub.c + (p+i)->sub.cpp + (p+i)->sub.java;
		 (p+i)->sgpa = (total / 300.0) * 10.0;

	}
	 printf("\nrno\tname\tc\tc++\tjava\tsgpa\n\n");
	 for(i=0;i<3;i++){
		 printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\n",(p+i)->rno,(p+i)->name,(p+i)->sub.c,(p+i)->sub.cpp,(p+i)->sub.java,(p+i)->sgpa);
	 }


	 for(i=0;i<3;i++){
		 for(int j=i+1;j<3;j++){
			 if((p+i)->sgpa < (p+j)->sgpa){
				 temp = *(p+i);
				 *(p+i) = *(p+j);
				 *(p+j) = temp;
			 }
		 }
	 }

	 printf("\n\nNow, The Data In Descending Order :\n\n");
	 printf("rno\tname\tc\tc++\tjava\tsgpa\n");

	 for(i=0;i<3;i++){
	     printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\n",(p+i)->rno,(p+i)->name,(p+i)->sub.c,(p+i)->sub.cpp,(p+i)->sub.java,(p+i)->sgpa);
     }

	 	 return 0;

}
