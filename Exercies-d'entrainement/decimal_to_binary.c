#include <stdio.h>
#include <string.h>

char convert(int number)
{
        if ((number % 2) == 1)
        {
                return  '1';
        }
        else 
        {
                return '0';
        }
}



void main(void)
{
        int decimal = 0;
        char inversed[8192] = "";
        printf("Entrer le nombre à convertir \n");
        scanf("%d", &decimal);
        while (decimal > 0)
        {
                char digit = convert(decimal); 
                char temp[2] = {digit, '\0'};  
                strcat(inversed, temp);        
                decimal /= 2;                  
        }
        int length = strlen(inversed);
        for (int i = 0; i < length / 2; i++) 
        {
                char temp = inversed[i];
                inversed[i] = inversed[length - i - 1];
                inversed[length - i - 1] = temp;
        }
        
        printf("%s \n", inversed);
}


