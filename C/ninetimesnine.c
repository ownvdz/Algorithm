#include<stdio.h>
int main() {
    
    int dan=2, count=1;

    while(count<=9) {
        printf("%d * %d = %d\n", dan, count, dan*count);
        count=count+1;
    }
}



/*
#include<stdio.h>
int main() {
    
    int i=1, dan;
    scanf("%d", &dan);

    while(i<10) {
        printf("%d * %d = %d\n", dan, i, dan*i);
        i++;
    }
}
*/