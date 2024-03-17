#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
  int data;
  struct _node *next;
} Node;

int main(void) {
  Node *head = NULL;
  Node *tail = NULL;
  Node *cur = NULL;

  Node *newNode = NULL;
  int readData;

  while(1) {
    printf("자연수 입력: ");
    scanf("%d", &readData);
    if(readData < 1)
      break;

    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = readData;
    newNode->next = NULL;

    if(head == NULL) {
      head = newNode;
      tail = newNode; //추가된부분
    }
    else {
      newNode->next = head; //바뀐부분
      head = newNode; //바뀐부분
    }

    //tail = newNode; 
  }
  printf("\n");

  printf("입력 받은 데이터의 전체출력! \n");
  if(head == tail) {
    printf("저장된 자연수가 존재하지 않습니다.\n");
  }
  else {
    cur = head;
    printf("%d ",cur->data);

    while(cur->next != NULL) {
      cur = cur->next;
      printf("%d ", cur->data);
    }
  }
  printf( "\n\n");

  if(head == NULL) {
    return 0;
  }
  else {
    Node *delNode = head;
    Node *delNextNode = head->next;

    printf("%d를 삭제합니다. \n", head->data);
    free(delNode);

    while(delNextNode != NULL) {
      delNode = delNextNode;
      delNextNode = delNextNode->next;

      printf("%d를 삭제합니다. \n", delNode->data);
      free(delNode);
    }
  }

  return 0;

}

27~36 # 
  입력이 3 2 7 8 5 0 일 경우
  처음 head와 tail은 NULL을 가리킴.
  다음으로 newNode의 data는 3, next는 NULL.
  newNode에 data 2, next null.
  else문으로 들어가 newNode의 next가 head가 가리키고 있는 3으로 바뀜.
  head가 3에서 newNode의 값인 2로 바뀜. (새로운 노드를 가리키도록 업데이트)

# newNode 변수 자체는 새로운 노드의 주소를 저장함.
