#include <stdio.h>
#define MAX_LIST_SIZE  100

int list[MAX_LIST_SIZE];
int length = 0;

void init(){
    length = 0;
}

int is_full(void){
    if(length == MAX_LIST_SIZE)
        return 1;
    else
        return 0;
}

int is_empty(void){
    if(length==0)
        return 1;
    else
        return 0;
}

void insert(int pos, int item){
    int i;

    if(is_full() == 1 || pos < 0 || pos > length){
        printf("삽입 에러\n");
        return;
    }

        for(i=length; i > pos; i--)
            list[i] = list[i-1];

        list[pos] = item;
        length++;


}
void print_list(){
    printf("(");
    for(int i = 0; i<length; i++)
        printf(" %d",list[i]);

    printf(" )\n");
}

int main() {
    int num = 10;
    for(int i =0;i<4;i++)
        insert(i, num += 10);

    insert(10 ,50);
    print_list();
    return 0;
}
