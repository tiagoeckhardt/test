#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct entry {
        char actor[32];
        int year;
        char title[32];
    };
    struct entry bond2;
    struct entry bond3;
    FILE *a007;

    strcpy(bond2.actor,"Roger Moore");
    bond2.year = 1973;
    strcpy(bond2.title,"Live and Let Die");
    strcpy(bond3.actor,"Pierce Brosnan");
    bond3.year = 1995;
    strcpy(bond3.title,"GoldenEye");

    a007 = fopen("bond.db","a");
    if(!a007)
    {
        puts("SPECTRE wins!");
        exit(1);
    }
    fwrite(&bond2,sizeof(struct entry),1,a007);
    fwrite(&bond3,sizeof(struct entry),1,a007);
    fclose(a007);
    puts("Records written");

    return(0);
}
