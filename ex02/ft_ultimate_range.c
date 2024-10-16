#include <stdio.h>
#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max){


    int i;
    if(min >= max){
        *range = NULL;
        return(0);



        

    }
    *range = malloc(sizeof(int) * (max - min));
    if(*range == NULL)
    return(0);
    i = 0;
    while(min < max){

        (*range)[i] = min;



        i++;
        min++;


    }
    return(i);


}
int main(void){

    int i;
    int *range;
    int size;
    size = ft_ultimate_range(&range, 5, 9);
    while(i < size){

        printf("%d\n", range[i]);
        i++;

    }
    free(range);
    return(0);


}

