#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[40];
    char check[40];
    int m=0;
    int i=0; // count
    int total;
    int bit;
    int length;
    bit=0;


    printf("Enter a Message: ");
    gets(word);
    //printf("word is %s \n",word);
    total = strlen(word);

    // Removes the spaces and commas to get just the chars.
    for(m=0;m<total;m++) {
    char ch = word[m];
    if((ch >= 65 && ch <= 90 )||(ch >= 97 && ch <= 122)){
            check[i] = ch;
            i++;
           // printf("%c \n ",ch);
    }

    }

    length = strlen(check);
    printf("length is %d \n",length);
    printf("string is %s \n",check);
    m=0;
    //length = length/2;
        //while(m<length){
                //printf("m=%d \n",m);

                 while (m<length/2){
                printf("char by char %c %c \n",check[m],check[length-1-m]);
                printf("%d ",m);
                char checkAll;
                checkAll = check[m]-check[length-m-1];
            if ((checkAll!=32)&&(checkAll!=-32)&&(checkAll!=0)){ // Reverses the array compares the 1st and last char.
                bit = 1;
                break;
            }
            m++;
                 }

                  if (!bit){
            printf("Yes palindrome");
        }

        else if (bit){
            printf("not palindrome");
        }

        getchar();
        return 1;



}

