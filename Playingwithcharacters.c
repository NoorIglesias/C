#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[15],sen[20];
    scanf("%c%s",&ch,&s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s", ch,s,sen);
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
