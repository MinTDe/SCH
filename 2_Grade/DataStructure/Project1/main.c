/* void init(void)                         완료
* void insert(int pos, Namecard item)      완료
* void delete(int pos)                     완료
* Namecard get_entry(int pos)              완료
* int is_empty(void)                       완료
* int is_full(void)                        완료
* int find(Namecard item)                  완료
* void replace(int pos, Namecard item)     완료
* int size(void)                           완료
* void sort_list(void)                     완료
* void print_list(char *msg)               완료
*/
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define MAX_IOT_LIST_SIZE 45

typedef struct {
    char name[20];  //이름
    int id;         //학번

} Namecard;

//data -> iot_list

Namecard iot_list[MAX_IOT_LIST_SIZE];   //학생 정보를 저장할 배열
int length;                             //리스트의 길이

//구조체 삽입 함수
Namecard make_Namecard(char name[], int id) {
    Namecard newCard;

    strcpy(newCard.name, name);
    newCard.id = id;

    return newCard;
}

//length를 0으로 초기화하는 함수
void init(void){
    length = 0;
}

//리스트가 가득 차 있으면 1, 그렇지 않으면 0을 리턴
int is_full(void){
    if(length == MAX_IOT_LIST_SIZE)
        return 1;
    else
        return 0;
}

//리스트가 비어 있으면 1, 그렇지 않으면 0을 리턴
int is_empty(void){
    if(length == 0)
        return 1;
    else
        return 0;
}

//리스트의 위치 pos에 item을 삽입
void insert(int pos, Namecard item){
    int i;

    if(is_full() == 0 && pos >= 0 && pos <= length){
        for(i = length; i > pos; i--)
            iot_list[i] = iot_list[i-1];

        iot_list[pos] = item;
        length++;
    }
    else
        printf("포화상태 오류 또는 삽입 위치 오류 \n");
}

//리스트에서 위치 pos의 원소를 삭제
void delete(int pos){
    int i;

    if(is_empty() == 0 && pos >= 0 && pos <= length - 1){
        for(i=pos; i <= length - 1; i++)
            iot_list[i] = iot_list[i+1];

        length--;
    }
    else
        printf("공백상태 오류 또는 삭제 위치 오류 \n");

}

//리스트에서 위치 pos의 원소를 반환, !!단 삭제하지는 않음 !!
Namecard get_entry(int pos){
    if(is_empty() == 0 && pos >= 0 && pos < length)
        return iot_list[pos];
    else
        printf("범위 오류\n");
}

//item이 리스트 내에 있으면 해당 item의 인덱스를 리턴 없으면 -1을 리턴
//!!item이 리스트 내에 있다는 의미는 name과 id가 모두 일치해야 함!!
int find(Namecard item){
        for (int i = 0; i <= length - 1; i++) {
            if (strcmp(iot_list[i].name, item.name) != 1 && iot_list[i].id == item.id)

                return i;
        }
    return -1;
}

//리스트의 위치 pos에 있는 원소를 item으로 교체
void replace(int pos, Namecard item){
    if(is_empty() == 0 && pos >= 0 && pos < length)
        iot_list[pos] = item;
    else
        printf("교체 위치 오류\n");
}

//리스트의 원소 개수를 리턴
int size(void){
    return length;
}

//학번에 따라 오름차순으로 정렬
void sort_list(void){
    Namecard temp;
    if(length == 0)
        printf("정렬할 정보가 없습니다. \n");

    for(int i = 0; i < length ; i++){
        for(int j = 0; j < length - 1; j++){
            if(iot_list[j].id > iot_list[j+1].id){
                temp = iot_list[j];
                iot_list[j] = iot_list[j+1];
                iot_list[j+1] = temp;
            }
        }
    }
}

//리스트의 모든 원소를 아래 양식으로 출력
//예)msg:(이름,학번)(이름,학번)(이름,학번)
void print_list(char *msg){
        printf("%s : ", msg);
        for(int i=0;i <= length-1;i++){
            printf("(%s, %d)",iot_list[i].name, iot_list[i].id);
        }
        printf("\n\n");

}

int main() {
    init();
    print_list("Init");
    insert(0, make_Namecard("김유청", 20181513));
    insert(0, make_Namecard("이정빈", 20201503));
    insert(1, make_Namecard("한문섭", 20201504));
    insert(size(), make_Namecard("김민성", 20201496));
    insert(3, make_Namecard("김성웅", 20201506));
    insert(size(), make_Namecard("김길호", 20201494));
    insert(10, make_Namecard("양기석", 20201508));
    print_list("Insert");

    replace(size() - 1, make_Namecard("염준선", 20201493));
    replace(4, make_Namecard("한승우", 20201511));
    replace(20, make_Namecard("권호윤", 20201512));
    print_list("Replace");

    delete(3);
    delete(size()-1);
    delete(0);
    delete(30);
    print_list("Delete");

    sort_list();
    print_list("Sort");

    printf("%s is found at %d\n", "한승우", find(make_Namecard("한승우", 20201511)));
    printf("%s is found at %d\n", "석준현", find(make_Namecard("석준현", 20201515)));
    printf("%s is found at %d\n","학문섭", find(make_Namecard("한문섭", 20201234)));

    return 0;
}

