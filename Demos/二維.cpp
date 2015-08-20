    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, width;
        
        scanf("%d",&length);
        scanf("%d",&width);
         
        for(i=0; i < width; i++){
            for(j=0; j < length; j++)
                printf("*");
            printf("\n");
        }     
        return 0;
    }
    
    
