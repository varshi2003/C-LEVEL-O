/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char alp;
    scanf("%c",&alp);
    if((alp=='a')||(alp=='e')||(alp=='i')||(alp=='o')||(alp=='u') )
    printf("vowel\n");
    else 
    printf("constonant\n");
    return 0;
}

