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
            
            if(i < width/2){
                for(j=0; j < i; j++)
                    printf("*");
            }
            else{
                 for(j=width-i-1; j > 0; j--)
                    printf("*");
            }  
                
            printf("\n");
        }      
        return 0;
    }
    
    
