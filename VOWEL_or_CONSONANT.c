#include<stdio.h>
int main()
{
    char m;
    scanf("%c",&m);
    if(m=='a' || m=='e' || m=='i' || m=='o' || m=='u' || m=='A' || m=='E' || m=='I' || m=='O' || m=='U')
    {
        printf("VOWEL");
    }
    else 
    {
        printf("CONSONANT");
    }
}