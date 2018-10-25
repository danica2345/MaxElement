
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[100];
    printf("How many elements? ");
    int n;
    scanf("%d",&n);
    printf("\nWrite these elements?\n");
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    int max = 0;
    for (int i=0; i<n; i++){
        if (array[i]>max)
            max = array[i];
    }
    printf("Highest number is: %d", max);
    
    
    return 0;
}
