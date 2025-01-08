#include <stdio.h>

int main(void) {

    // Prompt user to input valid size
    int n;
    do{
    printf("Enter size : \n");
    scanf("%d", &n);
    }while(n<1);

    // Print the block as per user requirement
    for ( int i=0; i<n; i++)
    {
        for( int j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
