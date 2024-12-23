/*
 * p5.c
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
    struct student s[3];
    struct student temp;
    int i;
    float total=0;


    for(i=0;i<3;i++){
        printf("Enter the student rno :");
        scanf("%d",&s[i].rno);
        printf("Enter the name of the student :");
        scanf("%s",s[i].name);
        printf("Enter the c_language marks :");
        scanf("%d",&s[i].sub.c);
        printf("Enter the c++_language marks :");
        scanf("%d",&s[i].sub.cpp);
        printf("Enter the java_language marks :");
        scanf("%d",&s[i].sub.java);
        total = s[i].sub.c + s[i].sub.cpp + s[i].sub.java;
        s[i].sgpa = (total / 300.0) * 10.0;
    }
    printf("\nrno\tname\tc\tc++\tjava\tsgpa\n\n");
    for(i=0;i<3;i++){
        printf("%d\t%s\t%d\t%d\t%d\t%f\n",s[i].rno,s[i].name,s[i].sub.c,s[i].sub.cpp,s[i].sub.java,s[i].sgpa);

    }

    for(i=0;i<3;i++){
    	for(int j=i+1;j<3;j++){
    		if(s[i].sgpa < s[j].sgpa){
    			temp = s[i];
    			s[i] = s[j];
    			s[j] = temp;
    		}
    	}
    }
    printf("\n\nNow, The Data In Descending Order :\n\n");
    printf("\nrno\tname\tc\tc++\tjava\tsgpa\n\n");
       for(i=0;i<3;i++){
           printf("%d\t%s\t%d\t%d\t%d\t%f\n",s[i].rno,s[i].name,s[i].sub.c,s[i].sub.cpp,s[i].sub.java,s[i].sgpa);

       }
    return 0;
}
