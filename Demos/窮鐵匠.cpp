    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, area, width;
        
        scanf("%d",&area);
        scanf("%d",&length);
        width = area / length;
        
        for(i=0; i < width; i++){
            for(j=0; j < length; j++)
                printf("*");
            printf("\n");
        }      
        return 0;
    }
    
    
