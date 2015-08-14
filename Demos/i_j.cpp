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
            for(j=0; j < length; j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
        system("pause");       
        return 0;
    }
    
    
