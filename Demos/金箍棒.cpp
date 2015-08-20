    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length;
        
        scanf("%d",&length); 
        for(i=0; i < 3; i++){
            for(j=0; j < length; j++)
                printf("*");
            printf("\n");
        }     
        return 0;
    }
    
    
