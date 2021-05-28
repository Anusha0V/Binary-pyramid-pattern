#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,rows,count=1,num=1,space;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    space=rows-1;
    for(i=1; i<=rows; i++){ //parent for loop- outer for loop
            
        for(j=1; j<=space; j++){//for loop for display space
        printf(" ");//print space
    }
         for(k=1; k<=num; k++){
        printf("%d", count%2);//print number for pyramid
        count++;
    }
    space--;
    num+=2;
    printf("\n");
    }
    getch();
    return 0;
}
