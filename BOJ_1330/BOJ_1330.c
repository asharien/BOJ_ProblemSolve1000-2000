#include <stdio.h>
#include <stdlib.h>
int main(){

        int A, B;

        scanf("%d %d", &A, &B);
        if(A>B){
                printf(">\n");
        }
        else if(A<B){
                printf("<\n");
        }
        else if(A==B){
                printf("==\n");
        }
        else{
                return 0;
        }

        return 0;
}
