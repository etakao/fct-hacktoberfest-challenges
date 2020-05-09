#include <stdio.h>
#include <math.h>

#define max 20

int maximum_product_of_three(int input[], int n){
    int i, j, k, higher = 0, aux;

    for (i = 0; i < n-2; i++){
        for (j = 1; j < n-1; j++){
            for (k = 2; k < n; k++){
                aux = (input[i] * input[j] * input[k]);
                if (aux > higher){
                    higher = aux;
                    printf("%d\n", higher)
;                }
            }
        }
    }

    return (printf("%d", higher));
}

int main(){
    int n, i;
    int input[max];

    printf("Insert the quantity of numbers in your array (min.: 3 & max.: 20): \n");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++){
        printf("Insert a integer number: \n");
        scanf("%d", &input[i]);
        printf("\n");
    }
    
    for (i = 0; i < n; i++){
    	printf("%d	", input[i]);
	}
	
	printf("\n");

    return(maximum_product_of_three(input, n));
}
