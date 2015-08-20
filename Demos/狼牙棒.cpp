    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, width;
        
        scanf("%d",&length);
        scanf("%d",&width);
        
        for(j=0; j < length; j++){
            if(j%4 == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

        for(i=0; i < width; i++){
            for(j=0; j < length; j++)
                printf("*");

            printf("\n");
        }

        for(j=0; j < length; j++){
            if(j%4 == 3)
                printf("*");
            else
                printf(" ");
        }     
        return 0;
    }
    
    
