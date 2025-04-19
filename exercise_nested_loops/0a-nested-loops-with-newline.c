#include<stdio.h>

int main(){
    
    for(int i = 1; i <= 5; i++){ // Repeats the inner loop 5 times
        for(int j = 1; j <= 4; j++){ // Prints numbers 1 to 4 in each outer loop iteration
            printf("%d ", j); // "%d " includes a space to separate the numbers
        }
        printf("\n");
    }
    

    return 0;
}
