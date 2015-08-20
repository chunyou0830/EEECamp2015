    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, width;
        
        scanf("%d",&length);
        scanf("%d",&width); 
        
        for(i=0; i < width; i++){
            if(i == 1 || i == width - 2){
                 for(j=0; j < length; j++){
                     if(j%6 == 2 || j%6 == 3)
                         printf("O");
                     else
                         printf("*");
                 }
                 printf("\n");
            }
            else{      
                for(j=0; j < length; j++)
                    printf("*");
                printf("\n");
            }
        }      
        return 0;
    }
    
    
