    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i, j, length;
        char rotation;
        
        printf("Do you want to rotate your stick? (y/n) ");
        scanf("%c",&rotation);
        printf("Length: ");
        scanf("%d",&length);
        if(rotation == 'n'){ 
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
        printf("\n");
        system("pause");       
        return 0;
    }
    
    
