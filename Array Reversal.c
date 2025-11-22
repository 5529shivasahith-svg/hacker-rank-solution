/*If array=[1,2,3,4,5], , after reversing it, the array should be, arr = [5,4,3,2,1].*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    
    for(i = 0; i < num / 2; i++) {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    free(arr); 
    return 0;
}
