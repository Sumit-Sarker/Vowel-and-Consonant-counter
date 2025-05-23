#include <stdio.h>

int main()
{
    char word[100];
    int vowels=0, consonants=0;

    printf("Enter a word: ");
    scanf("%s",word);

    for(int i=0; word[i] !='\0';i++){
        char ch = word[i];

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    printf("Numbers of vowels in the word: %d\n",vowels);
    printf("Numbers of consonants in the word: %d\n",consonants);
    return 0;
}
