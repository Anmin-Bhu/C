// This is for taking string as input where 
// First input : character
// Second input: word
// Third character: Sentence


#include <stdio.h>

int main(){

    char ch[20]; // Using single variable to save memory 
    scanf("%s",ch);
    printf("%s\n",ch);
    scanf("%s",ch);
    printf("%s\n",ch);
    scanf("\n%[^\n]",ch);// We can use fgets() as well forr this
    printf("%s",ch);
    
    return 0;
}