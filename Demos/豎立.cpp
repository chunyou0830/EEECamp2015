    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, rotation;
        
        scanf("%d",&rotation);
        scanf("%d",&length);
        if(rotation == 0){ 
            for(i=0; i < 3; i++){
                for(j=0; j < length; j++)
                    printf("*");
                printf("\n");
            }
        }
        else{
            for(i=0; i < length; i++){
                for(j=0; j < 3; j++)
                    printf("*");
                printf("\n");
            }
        }    
        return 0;
    }
    
    
