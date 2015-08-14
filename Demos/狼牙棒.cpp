    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, width;
        
        printf("Length: ");
        scanf("%d",&length);
        printf("Width: ");
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

        for(j=0; j < length; j++){
            if(j%4 == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n\n");

        system("pause");       
        return 0;
    }
    
    
