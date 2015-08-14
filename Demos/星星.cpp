    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, width;
        
        printf("Length: ");
        scanf("%d",&length);
        printf("Width: ");
        scanf("%d",&width); 
        
        for(i=0; i < width; i++){
            if(i == 1 || i == width - 2){
                 for(j=0; j < length; j++){
                     if(j%6 == 2 || j%6 == 3)
                         printf(" ");
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
        printf("\n");
        system("pause");       
        return 0;
    }
    
    
