

#include<string.h>
#include<stdio.h>

int main(){
    char name[] = "hello word";
    char name1[20];
    
     strcpy(name1,strrev(name));

    printf("%s",name1);

    return 1;
}