#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[40];
    char check[40];
    int m;

    char *wordpointer = word;
    char *checkpointer = check;

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
            char ch = *(wordpointer+m);

    if((ch>='a' && ch <='z')||(ch>='A' && ch <='Z')){
             check[i] = ch;
    //printf("Prints the letters %c \n",check[i]);
            //check[i] = ch;
            i++;
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
                char checkAll;
                checkAll = check[m]-check[length-m-1];
            if ((checkAll!=32)&&(checkAll!=-32)&&(checkAll!=0)){
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

