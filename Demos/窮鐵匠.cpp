    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length, area, width;
        
        printf("Area: ");
        scanf("%d",&area);
        printf("Length: ");
        scanf("%d",&length);
        width = area / length;
        
        for(i=0; i < width; i++){
            for(j=0; j < length; j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
        system("pause");       
        return 0;
    }
    
    
