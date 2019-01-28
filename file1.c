//#include <emscripten/emscripten.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char num[9];
    strcpy(num,"abcdefg\0");
 char a[10],b[10];
    FILE *fptr ,*fbptr;

    fptr = fopen("C:\\Program Files\\Emscripten\\emscripten\\1.16.0\\fwr.txt","r");

    if(fptr)
        printf("succeed");
    fscanf(fptr,"%s",&a);


    printf("%s",a);
    fclose(fptr);

    fbptr = fopen("C:\\Program Files\\Emscripten\\emscripten\\1.16.0\\fbin.txt","wb");

    fwrite(&num, sizeof(num),1,fbptr);

    fread(&num, sizeof(num),1,fbptr);



    printf("%s",b);

    //fwrite(&b, sizeof(b),1,fbptr);

    fclose(fbptr);

    return 0;

}


//emcc -o file.html file1.c -s WASM=1 -O3 -s NO_EXIT_RUNTIME=1 -s EXPORTED_FUNCTIONS="['_main']"