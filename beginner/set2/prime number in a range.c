#include <stdio.h>

int main(void) {
	
    int low, high, i,j, flag;
 
    scanf("%d %d", &low, &high);

    for(i=low;i<high;i++){
        flag = 0;

        for(j = 2; j <= i/2; ++j)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", i);

       
    }

    return 0;
}
