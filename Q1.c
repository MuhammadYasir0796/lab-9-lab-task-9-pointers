#include <stdio.h>
int getSize(char *ch){
    int size=0;
    while (*ch != '\0'){
        size++;
        ch++;
    }
    return size;
}
int main() {
    char n[100];
    printf("String: ");
    fgets(n,sizeof(n),stdin);
    n[getSize(n)-1]='\0';
    printf("Size of string is %d",getSize(n));
    return 0;
}